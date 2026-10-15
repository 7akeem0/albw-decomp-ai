#include "range17.h"
struct Sub25 {u8 pad[0x86];u8 flag;void func_0025BDA4(s32);};
struct Obj25 {u8 pad[0x40];Sub25* child;};
extern "C" void g_25B8E8(Sub25*,s32);
void f_0025B8E0(Obj25* p,s32 n){ g_25B8E8(p->child,n); }
