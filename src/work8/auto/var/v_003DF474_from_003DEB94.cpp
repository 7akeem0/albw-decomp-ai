#include "../../../work7/ds4/ds4.h"
struct Obj { u32 w0; u8 p[0x1a - 4]; u16 h18; };
struct T { u8 p[0x131e]; };
extern "C" u32 func_0010AA9C(T*, u16);
u32 f(T* self, u16 v) {
  if (!func_0010AA9C(self, v)) return 0;
  Obj* o = *(Obj**)((char*)self + *(u16*)((char*)self + 0x131e) * 4 + 0x10a0);
  o->h18 = v;
  o->w0 |= 0x10000000;
  return 1;
}
