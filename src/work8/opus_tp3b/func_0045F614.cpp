#include "../../work7/ds4/ds4.h"
struct Base { virtual void v(); };
typedef void (Base::*PMF)();
struct T { u8 p0[0x74]; u32 mc; s8 idx; u8 p1[0x84 - 0x79];
           u32 mf; void* mo; PMF* me; PMF* mt; u8 p2[0x11c - 0x94]; u8 m11c; };
extern "C" void func_00352210(void*, u32, f32);
void f(T* self) {
  (((Base*)self->mo)->*self->mt[self->idx])();
  u32 c = ++self->mc;
  if (self->mf) func_00352210((void*)self->mf, 1, (f32)c);
  T* s2 = self;
  s2->m11c = 3;
}
