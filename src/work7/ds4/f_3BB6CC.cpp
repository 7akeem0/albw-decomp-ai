#include "ds4.h"
struct G6CC { u8 p[0x10]; void* m10; };
extern void* data_00711010;
extern "C" void func_002C2C9C(void*, void*);
extern "C" u32 func_002C2D00(void*);
extern "C" void func_002D42E8(void*);
struct T6CC { u32 m0; u32 m4; };
void f(T6CC* self) {
  u8 buf[0x40];
  G6CC* g = (G6CC*)data_00711010;
  char* h = (char*)g->m10;
  func_002C2C9C(buf, *(void**)(h + 0x6c));
  buf[0x1c] = 1;
  *(u32*)(buf + 0x18) |= 1;
  u32 p = func_002C2D00(buf);
  self->m4 = p;
  *(u32*)(p + 0x164) = *(u32*)(p + 0x164) | 0x80000;
  func_002D42E8(self);
}
