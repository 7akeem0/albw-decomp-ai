#include "ds4.h"
struct Obj { u32 w0; };
struct T { u8 p[0x131e]; };
extern "C" u32 func_0010AA9C(T*, u32, u16);
u32 f(T* self, u32 i, u16 v) {
  if (!func_0010AA9C(self, i, v)) return 0;
  Obj* p = *(Obj**)((char*)self + *(u16*)((char*)self + 0x131e) * 4 + 0x10a0);
  u16* q = (u16*)((char*)p + 4);
  q[0x12 + i] = v;
  if (i == 0) p->w0 |= 0x100;
  else if (i == 1) p->w0 |= 0x200;
  return 1;
}

