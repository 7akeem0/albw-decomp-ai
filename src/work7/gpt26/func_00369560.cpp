#include "range.h"
void func_00369560(Obj3695* p,const void* a,const void* b,Manager4B94* manager) {
    if(!(p->flags&2)) {
        func_0034BA3C(p->child,a,b);
        func_004B948C(manager,p->child);
        p->flags|=2;
    }
}
