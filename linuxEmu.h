#pragma once
#include <wtypes.h>
#define MUTEX_TYPE             HANDLE
#define MUTEX_INITIALIZER      NULL
#define MUTEX_SETUP(x)         (x) = CreateMutex(NULL, FALSE, NULL)
#define MUTEX_CLEANUP(x)       (CloseHandle(x) == 0)
#define MUTEX_LOCK(x)          emulate_pthread_mutex_lock(&(x))
#define MUTEX_UNLOCK(x)        (ReleaseMutex(x) == 0)

int emulate_pthread_mutex_lock(volatile MUTEX_TYPE* mx)
{
    if (*mx == NULL) /* static initializer? */
    {
        HANDLE p = CreateMutex(NULL, FALSE, NULL);
        if (InterlockedCompareExchangePointer((PVOID*)mx, (PVOID)p, NULL) != NULL)
            CloseHandle(p);
    }
    return WaitForSingleObject(*mx, INFINITE) == WAIT_FAILED;
}