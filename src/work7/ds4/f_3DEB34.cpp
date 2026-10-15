#include "ds4.h"
struct Node { u32 flags; u8 pad[0x30]; f32 v; };
struct Ent { u8 pad[0x131a]; u16 flags; };
extern "C" u32 func_0010AA9C();
u32 f(Ent* self, u32 idx, f32 v) {
  if (!func_0010AA9C()) return 0;
  Node* o = *(Node**)((u8*)self + (self->flags & 1) * 0x60 + idx * 4 + 0x10b0);
  o->v = v;
  o->flags |= 0x40000;
  return 1;
}
