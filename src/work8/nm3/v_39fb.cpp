#include "ds4.h"
struct G { u8 p[0x10]; void* m10; };
struct H { u8 p[0x44]; void* m44; void* m48; };
extern void* data_00711010;
extern "C" void func_002C2C9C(void*, void*);
extern "C" u32 func_002C2D00(void*);
extern "C" void func_002D42E8(void*);
struct T { u32 m0; u32 m4; u8 p8[0x1c - 8]; u32 m1c; u32 m20; };
void f(T* self) {
  G* g = (G*)data_00711010;
  H* h = (H*)g->m10;
  {
    u8 buf[0x40];
    func_002C2C9C(buf, h->m44);
    buf[0x1c] = 1;
    *(u32*)(buf + 0x18) |= 1;
    self->m1c = func_002C2D00(buf);
    func_002C2C9C(buf, h->m48);
    buf[0x1c] = 1;
    *(u32*)(buf + 0x18) |= 1;
    self->m20 = func_002C2D00(buf);
  }
  self->m4 = self->m1c;
  func_002D42E8(self);
}
