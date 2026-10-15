#include "ds4.h"
struct T { u8 pad[8]; u32 m8; };
extern "C" void func_0010C1B8(u32);
extern "C" void func_003C8BD8(u32);
T* f(T* self) {
  u32* p = &self->m8;
  u32 v = *p;
  if ((v & ~1u) != 0) {
    if (v & 1) func_0010C1B8(v);
    func_003C8BD8(*p & ~1u);
    *p = 0;
  }
  return self;
}

