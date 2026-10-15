#include "../range_types.h"
struct Obj2F21 {char pad[0x59c];Flag32 flags;char gap[0xe0e-0x5a0];u8 mode;};
extern "C" void func_002F3D28(Obj2F21*);
extern "C" void f_002F21D0(Obj2F21*p){p->mode=0;func_002F3D28(p);p->flags.set(7);}
