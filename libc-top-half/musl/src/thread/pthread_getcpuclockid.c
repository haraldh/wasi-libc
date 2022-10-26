#include "pthread_impl.h"

#ifndef __wasilibc_unmodified_upstream
#include <common/clock.h>
#endif

int pthread_getcpuclockid(pthread_t t, clockid_t *clockid)
{
#ifdef __wasilibc_unmodified_upstream
	*clockid = (-t->tid-1)*8U + 6;
#else
	*clockid = (clockid_t) ((-t->tid-1)*8U + 6);
#endif
	return 0;
}
