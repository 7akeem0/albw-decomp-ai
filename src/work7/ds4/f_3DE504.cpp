#include "ds4.h"
struct T { void* m0; u8 pad8[0x34 - 4]; f32 a[4]; f32 b[4]; f32 c[4]; };
void f(T* self, void* p) {
  self->m0 = p;
  for (int i = 0; i < 4; i++) {
    self->c[i] = 0.0f;
    self->b[i] = 0.0f;
    self->a[i] = 0.0f;
  }
}

