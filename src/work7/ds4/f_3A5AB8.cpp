#include "ds4.h"
struct G { u8 p[0x10]; void* m10; };
extern void* data_00711010;
extern "C" void func_002C2C9C(void*, void*);
extern "C" u32 func_002C2D00(void*);
extern "C" void func_002D42E8(void*);
struct T { u32 m0; u32 m4; };
void f(T* self) {
  u8 buf[0x40];
  G* g = (G*)data_00711010;
  char* h = (char*)g->m10;
  func_002C2C9C(buf, *(void**)(h + 0x30));
  buf[0x1c] = 1;
  *(u32*)(buf + 0x18) |= 1;
  self->m4 = func_002C2D00(buf);
  func_002D42E8(self);
}
