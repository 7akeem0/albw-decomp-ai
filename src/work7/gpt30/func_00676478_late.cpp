#include "ring136.h"
void Ring30::put(u32 value){buffer[head]=value;++count;}
void Ring30::notify(){if(waiting>0)event.func_003CD868(1);}
bool target(Ring30*p,u32 value){
    LockScope30 scoped(&p->lock);
    if(p->capacity>p->count){
        p->head=(p->head+p->capacity-1)%p->capacity;
        p->put(value);
        p->notify();
        return true;
    }
    return false;
}
