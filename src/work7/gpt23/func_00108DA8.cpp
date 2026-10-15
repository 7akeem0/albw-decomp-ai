#include "range.h"
struct Global108D {u32 word;u8 active;};
extern Global108D data_00714838;
extern "C" s8 func_0010AA9C();
extern "C" void func_0010AB74();
extern "C" void func_0010AB0C();
extern "C" void func_00108DA8(s32 off){
    if(off){if(data_00714838.active){func_0010AB74();data_00714838.active=0;}}
    else if(func_0010AA9C()){func_0010AB0C();data_00714838.active=1;}
}
