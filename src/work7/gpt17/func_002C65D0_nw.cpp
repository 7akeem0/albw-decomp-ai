#include "range.h"
struct Obj{u8 pad0[0x4C0];s32 state;};
extern  void func_006631AC(s32*,s32);
void f_002C65D0(Obj*p){if(p->state<=30)return;func_006631AC(&p->state,2);}
