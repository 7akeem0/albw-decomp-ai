#include "range.h"
struct PlayerContext126 {char pad0[0x44];void* active;};
extern PlayerContext126* data_0070B728;
extern "C" void func_00127004(void*);
extern "C" void func_004F5BD8(void*,s32,s32);
extern "C" void func_004F68AC(void*,s32);
extern "C" void func_00126CF4(void* p,s32 value){
    s32 copied=value;
    if(!copied && data_0070B728->active){func_00127004(p);func_004F5BD8(p,0,0);}
    func_004F68AC(p,copied);
}
