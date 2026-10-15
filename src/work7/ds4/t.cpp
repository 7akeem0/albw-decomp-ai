#include "ds4.h"
struct Node { u32 flags; u8 pad[0x34]; u8 b38, b39; };
struct Ent { u8 pad[0x131a]; u16 flags; };
extern "C" u32 func_0010AA9C();
u32 f(Ent* self, u32 idx, u8 a2, u8 a3) {
  if (!func_0010AA9C()) return 0;
  Node* o = *(Node**)((u8*)self + (self->flags & 1) * 0x60 + idx * 4 + 0x10b0);
  o->b38 = a2;
  if (a2 == 0) o->b39 = a3;
  o->flags |= 0x20000;
  return 1;
}
