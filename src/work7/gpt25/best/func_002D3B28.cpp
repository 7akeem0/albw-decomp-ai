#include "../range_types.h"
struct Obj2D3B28 {char pad[0x10];f32 value;char gap[0x24];u8 flag;};
extern "C" void f_002D3B28(Obj2D3B28*p,bool on){f32 seconds=on?15.f:10.f;p->flag=on;p->value=seconds*60.f;}
