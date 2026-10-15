#include "range.h"
extern "C" s32 func_003CD868(Semaphore22*,s32);

bool target(RingQueue22*p,u32*out){ScopedLock22 lock(&p->mutex);if((s32)p->count>0){*out=p->buffer[p->head];p->head=(p->head+1)%p->capacity;--p->count;if(p->writers>0)func_003CD868(&p->writable,1);return true;}return false;}
