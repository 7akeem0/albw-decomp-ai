#include "ds4.h"
struct Obj { u32 w0; };
struct T { u8 p[0x131e]; };
extern "C" u32 func_0010AA9C(T*, u32, u16);
u32 f(T* self, u32 i, u16 v) {
  if (!func_0010AA9C(self, i, v)) return 0;
  Obj* p = *(Obj**)((char*)self + *(u16*)((char*)self + 0x131e) * 4 + 0x10a0);
  u16* base = (u16*)((char*)p + 4);
  base[0x10 + i] = v;
  if (i == 0) p->w0 |= 0x40;
  else if (i == 1) p->w0 |= 0x80;
  return 1;
}
