#include "range.h"
struct Obj {u8 pad[0x40c];s32 state;u8 p410[0x51];u8 flag;};
extern  void func_00661990(s32*,s32);
void f_0029A7A4(Obj* p){if(p->flag)return;func_00661990(&p->state,0);}

