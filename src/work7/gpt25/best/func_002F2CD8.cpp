#include "../range_types.h"
struct Obj2F2C{char pad[0x59c];Flag32 flags;char gap[0xe0e-0x5a0];u8 flag;char gapE0F[0xe1c-0xe0f];f32 value;};
extern "C" void func_002F3D28(Obj2F2C*);
void func_002F2CD8(Obj2F2C*p){p->value=0.f;p->flag=0;func_002F3D28(p);p->flags.set(7);}
