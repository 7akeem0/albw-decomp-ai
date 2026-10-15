#include "ds4.h"
struct Base { virtual void v(); };
typedef void (Base::*PMF)();
struct T { u8 p0[0x10]; u32 m10; s8 idx; u8 p1[0x20 - 0x15];
           u32 m20; void* m24; u8 p2[0x2c - 0x28]; PMF* m2c;
           u8 p3[0x34 - 0x30]; u32 m34; u32 m38; };
extern "C" void func_00352210(void*, u32, f32);
extern "C" void func_00169A80(void*);
extern "C" void func_00168E9C(void*, u32, u32);
void f(T* self) {
  (((Base*)self->m24)->*self->m2c[self->idx])();
  u32 c = ++self->m10;
  if (self->m20) func_00352210((void*)self->m20, 1, (f32)c);
  func_00169A80((void*)self->m38);
  func_00168E9C((void*)self->m38, self->m34, 0);
}
