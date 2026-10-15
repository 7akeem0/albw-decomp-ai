#include "range.h"
struct C666 {u8 pad[0x16];u16 flags;};struct S666 {u32 v;};struct O666 {u8 pad[0x14];C666*child;u8 gap[0x20];S666 state;};
extern "C"  void func_00667638(S666*,s32);
extern "C" void func_0037666C(O666*p){if(p->child->flags&0x80)return;func_00667638(&p->state,3);}
