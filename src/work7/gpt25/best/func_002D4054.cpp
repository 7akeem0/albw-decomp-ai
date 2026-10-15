#include "../range_types.h"
struct Obj2D4054 {char pad[0x10];f32 value;char gap[0x24];u8 flag;};
extern "C" void f_002D4054(Obj2D4054*p){f32 seconds=p->flag?15.f:10.f;p->value=seconds*60.f;}
