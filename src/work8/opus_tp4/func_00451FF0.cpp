#include "../../work7/ds4/ds4.h"
struct Base { virtual void v(); };
typedef void (Base::*PMF)();
struct T { u8 p0[0x74]; u32 mc; s8 idx; u8 p1[0x84 - 0x79];
           u32 mf; void* mo; u8 p2[0x90 - 0x8c]; PMF* mt; };
extern "C" void func_00352210(void*, u32, f32);
struct F16 { u16 v; void set(u16 m){ v |= m; } };
struct G { u8 pad[0x33e]; F16 flags; };
extern G* data_007142C8;
extern "C" void func_00451FF0(T* self) {
  (((Base*)self->mo)->*self->mt[self->idx])();
  u32 c = ++self->mc;
  if (self->mf) func_00352210((void*)self->mf, 1, (f32)c);
  data_007142C8->flags.set(4);
}
