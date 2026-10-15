#include "range.h"
u32 dispatch3D2(const Global3D2* global,u32* output,u32 failure) {
    Manager3D2* manager=global->manager;
    u32 result=failure;
    if(manager)result=func_003D2EA8(manager,output);
    return result;
}
u32 func_003D2AEC(u32* output) {
    return dispatch3D2(&data_007158E8,output,0xC8A0A7F8);
}
