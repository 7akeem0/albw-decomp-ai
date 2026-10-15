#include "range.h"
extern "C" f32 func_0052F864(Actor1373*);
extern "C" bool func_001E4044(Actor1373*,u16);
extern "C" void func_00137354(Actor1373* p) {
    if(p->flag && func_001E4044(p,(u16)(u32)func_0052F864(p)))p->flag=0;
}
