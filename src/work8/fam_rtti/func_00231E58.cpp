#include "../../work7/ds4/ds4.h"
struct Base { virtual void v(); };
typedef void (Base::*PMF)();
struct T { u8 p0[0x4c]; u32 mc; s8 idx; u8 p1[0x5c - 0x51];
           u32 mf; void* mo; u8 p2[0x68 - 0x64]; PMF* mt; };
extern "C" void func_00352210(void*, u32, f32);
void func_00231E58(T* self) {
  (((Base*)self->mo)->*self->mt[self->idx])();
  u32 c = ++self->mc;
  if (self->mf) func_00352210((void*)self->mf, 1, (f32)c);
}
