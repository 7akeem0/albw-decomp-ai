#include "range.h"
extern "C" s32 func_003CD868(Semaphore22*,s32);
void notify(RingQueue22*p){if(p->waiters>0)func_003CD868(&p->readable,1);}
bool target(RingQueue22*p,u32 value){ScopedLock22 lock(&p->mutex);if(p->capacity>p->count){u32 index=(p->count+p->head)%p->capacity;p->buffer[index]=value;++p->count;notify(p);return true;}return false;}
