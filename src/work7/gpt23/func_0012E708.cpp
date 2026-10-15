#include "range.h"
extern "C" void func_0012E708(Owner12E7* p,u32 on) {
    FlagChild12E7** children=p->children;
    FlagChild12E7* child=*children;
    if(!child->first && !child->second) {
        if(!on)child->option=0;
        (*children)->setSecond(1);
    }
}
