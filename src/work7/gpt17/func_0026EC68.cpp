#include "range.h"
struct Obj26EC {u8 pad[0x68];u8 a[0x1f4-0x68];u8 b[0x2c8-0x1f4];u32 flags;};
void* f_26EC68(Obj26EC* p){return p->flags&2 ? p->b:p->a;}
