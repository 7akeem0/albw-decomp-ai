#include "ladder_types.h"
struct O523860 {char pad0[0x2dc];u32 frames;};
extern "C" s16 func_00523860(O523860* p){
    if(p->frames==0xffffffffu)return 0;
    return (s16)(p->frames*(1.f/60.f));
}
