#include "range.h"
struct S269 {u32 v;void func_003C26B8();};
struct O269 {u8 pad[0x59c];Flag32 flags;u8 gap[0x340];S269 sub;u8 more[0xb3d-0x8e4];u8 flag;};
extern "C" void func_003C2698(O269*p){p->flag=1;p->flags.reset(12);p->flags.reset(128);p->sub.func_003C26B8();}
