#include "ladder_types.h"
struct O4A47 {char pad0[0x20];char state[0x24];char animation[0xc];char sub50[4];};
extern "C" bool func_00532C78(void*);
extern "C" void func_002317C0(void*,f32);
extern "C"  void func_0066F684(void*,u32);
extern "C" void func_004A4790(O4A47*p){if(!func_00532C78(p->animation)){func_002317C0(p->sub50,1.f);func_0066F684(p->state,0);}}
