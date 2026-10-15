#include "ds4.h"
struct Obj { u32 w0; u8 p[0x1c - 4]; u16 h1c; };
struct T { u8 p[0x131e]; };
extern "C" u32 func_0010AA9C(T*, u32);
u32 f(T* self, u32 v) {
  if (!func_0010AA9C(self, v)) return 0;
  if (v >= 0x8000) v = 0x7fff;
  Obj* o = *(Obj**)((char*)self + *(u16*)((char*)self + 0x131e) * 4 + 0x10a0);
  o->h1c = (u16)v;
  o->w0 |= 0x20000000;
  return 1;
}

