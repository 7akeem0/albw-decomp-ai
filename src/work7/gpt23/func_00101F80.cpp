#include "range.h"
extern "C" s32 func_0010939C();
extern "C" void func_0010A8D4(Event8*);
extern "C" void func_00101F80(Owner101F* p) {
    if(p->enabled && func_0010939C()) {
        p->flag15=0;
        func_0010A8D4(&p->event);
        p->state=1;
    }
}
