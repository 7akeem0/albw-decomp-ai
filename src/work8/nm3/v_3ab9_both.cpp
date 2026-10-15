#include "ds4.h"
struct Inner94 { u8 pad[0x30]; u8 b30; };
struct Mid94 { u8 pad[0x8d4]; Inner94* p8d4; };
struct T94 { u32 m0; Mid94* m4; u8 pad[5]; u8 b_d; };
extern "C" void func_004CF478(u32, u32, u32);
void f(T94* self, u32 a1) {
  u32 a = a1;
  u32 b = self->b_d;
  if (b != 0) {
    if (self->m4->p8d4->b30) func_004CF478(a, 1, 0);
    else func_004CF478(a, 0, 0);
  }
}
