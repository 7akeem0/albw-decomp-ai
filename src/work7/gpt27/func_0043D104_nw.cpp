#include "range.h"
struct Owner43D{u8 pad[0x98];u32 state;u8 gap9c[0x134-0x9c];u8 ctrl[0x24];void*child;};
extern "C" bool func_00532C78(void*);
extern "C" bool func_00479E9C(void*);
extern "C"  void func_0066C424(void*,s32);
void func_0043D104(Owner43D*p){if(!func_00532C78(p->ctrl)&&func_00479E9C(p->child))func_0066C424(&p->state,6);}
