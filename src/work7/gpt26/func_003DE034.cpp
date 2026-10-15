#include "range.h"
void func_003DE034(Obj3DE0* p,s32 mode) {
    if(mode<2) mode=2;
    else if(mode>3) mode=3;
    p->mode=mode;
    func_003DF430(&bss_007A06F0,mode);
}
