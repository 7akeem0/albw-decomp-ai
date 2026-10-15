#include "../../work7/ds4/ds4.h"
struct Base { virtual void v(); };
typedef void (Base::*PMF)();
struct T { u8 p0[0x64]; u32 mc; s8 idx; u8 p1[0x74 - 0x69];
           u32 mf; void* mo; u8 p2[0x80 - 0x7c]; PMF* mt; };
extern "C" void func_00352210(void*, u32, f32);
void func_00275438(T* self) {
  (((Base*)self->mo)->*self->mt[self->idx])();
  u32 c = ++self->mc;
  if (self->mf) func_00352210((void*)self->mf, 1, (f32)c);
}
