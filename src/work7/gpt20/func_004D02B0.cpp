#include "ladder_types.h"
struct O4D02 {char pad0[0x24];void* model;};
extern "C" void func_004CF864(void*,u32,s32);
extern "C" void func_004CF478(void*,bool,u32);
extern "C" void func_004D02E8(void*,bool);
extern "C" void func_004D02B0(O4D02*p){func_004CF864(p->model,0,-1);func_004CF478(p->model,false,0);func_004D02E8(p->model,false);}
