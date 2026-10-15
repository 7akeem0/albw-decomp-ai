#include "range.h"
struct Owner459{u8 pad[0xf8];Ctrl231 a;u8 gap104[0x128-0x104];Ctrl231 b;u8 gap134[0x17c-0x134];u32 state;};
extern "C" bool func_00532C78(void*);
extern "C"  void func_0066D544(void*,s32);
void func_00459A4C(Owner459*p){if(!func_00532C78(&p->a)&&!func_00532C78(&p->b))func_0066D544(&p->state,18);}
