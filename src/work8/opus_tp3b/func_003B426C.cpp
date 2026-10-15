#include "../../work7/ds4/ds4.h"
struct Base { virtual void v(); };
typedef void (Base::*PMF)();
struct T { u8 p0[0x62]; u8 m62, m63; u8 p64[0x6c - 0x64]; u32 mc; s8 idx; u8 p1[0x7c - 0x71];
           u32 mf; void* mo; PMF* me; PMF* mt; };
extern "C" void func_00352210(void*, u32, f32);
void f(T* self) {T* s = self;self->m62 = 0;self->m63 = 0;T* s2 = self;(((Base*)s2->mo)->*s2->mt[s2->idx])();u32 c = ++self->mc;if (self->mf) func_00352210((void*)self->mf, 1, (f32)c);}
