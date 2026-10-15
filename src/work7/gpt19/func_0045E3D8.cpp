#include "range.h"
struct S {u8 pad[0x110];u8 ctl[4];};
extern "C" void func_002317C0(void*,f32);
extern "C" void func_0023194C(void*,s32);
extern "C" void func_0045DCB0(S*);
extern "C" void f_0045E3D8(S* s){func_002317C0(s->ctl,1);func_0023194C(s->ctl,4);func_0045DCB0(s);}
