#include "ds4.h"
struct T { u8 p0[0x130]; u8 b130; u8 p1[0x138 - 0x131];
           u32 m138, m13c, m140, m144, m148, m14c, m150, m154, m158, m15c, m160; };
extern "C" void func_003D20D8(T*);
T* f(T* self) {
  self->b130 = 0;
  self->m138 = 0;
  self->m144 = 0; self->m148 = 0; self->m14c = 0; self->m150 = 0;
  self->m154 = 0; self->m158 = 0; self->m15c = 0; self->m160 = 0;
  self->m13c = 0; self->m140 = 0;
  func_003D20D8(self);
  return self;
}
