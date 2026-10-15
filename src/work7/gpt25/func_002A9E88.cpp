#include "range_types.h"
struct Arg2A9E { char pad[0x27]; s8 flag; };
struct Obj2A9E { char pad[0x8fc]; u8 flag; };
extern "C" void f_002A9E88(Obj2A9E* p,bool enabled,const Arg2A9E* a) {
    if (enabled) {
        if (a->flag) p->flag=1;
    } else p->flag=0;
}
