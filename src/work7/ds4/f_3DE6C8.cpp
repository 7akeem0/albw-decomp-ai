#include "ds4.h"
struct Obj { u8 p[0xbc]; u16 hBC; u8 p2[2]; u32 wC0; };
struct T { u8 p[0x131e]; };
extern "C" u32 func_0010AA9C(T*, u16);
void f(T* self, u16 v) {
  if (!func_0010AA9C(self, v)) return;
  Obj* o = *(Obj**)((char*)self + *(u16*)((char*)self + 0x131e) * 4 + 0x10a0);
  o->hBC = v;
  o->wC0 |= 0x10000;
}

