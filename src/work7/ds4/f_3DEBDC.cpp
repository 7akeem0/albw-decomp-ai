#include "ds4.h"
struct Obj { u32 w0; f32 f4; };
struct T { u8 p[0x131e]; };
extern "C" u32 func_0010AA9C(T*);
void f(T* self, f32 v) {
  if (!func_0010AA9C(self)) return;
  Obj* o = *(Obj**)((char*)self + *(u16*)((char*)self + 0x131e) * 4 + 0x10a0);
  o->f4 = v;
  o->w0 |= 0x10000;
}
