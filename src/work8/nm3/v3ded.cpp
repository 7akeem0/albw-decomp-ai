#include "ds4.h"
struct Obj { u32 w0; };
struct T { u8 p[0x131e]; };
extern "C" u32 func_0010AA9C(T*, u32);
void f(T* self, u32 i, f32 v) {
  if (!func_0010AA9C(self, i)) return;
  Obj* p = *(Obj**)((char*)self + *(u16*)((char*)self + 0x131e) * 4 + 0x10a0);
  f32* q = (f32*)((char*)p + 4);
  q[1 + i] = v;
  if (i == 0) p->w0 |= 0x1000000;
  else if (i == 1) p->w0 |= 0x2000000;
}

