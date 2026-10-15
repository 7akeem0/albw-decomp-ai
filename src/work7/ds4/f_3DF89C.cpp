#include "ds4.h"
struct Obj { u32 w0; };
struct T { u8 p[0x131a]; };
extern "C" u32 func_0010AA9C(T*, u32);
u32 f(T* self, u32 i) {
  if (!func_0010AA9C(self, i)) return 0;
  u32 k = (*(u16*)((char*)self + 0x131a) & 1) * 3;
  Obj* p = *(Obj**)((char*)self + k * 0x20 + i * 4 + 0x10b0);
  p->w0 |= 0x20000000;
  return 1;
}
