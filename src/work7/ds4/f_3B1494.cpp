#include "ds4.h"
struct T1494 { u8 pad[0x48]; u8* m48; u8 pad2[4]; f32 f50; };
extern "C" void func_0058A7D4(void*);
extern "C" u32 func_00111A64();
void f(T1494* self) {
  func_0058A7D4(self->m48);
  f32 two = 2.0f;
  f32 r = (f32)func_00111A64() * 2.3283064e-10f;
  r = r * two;
  r = r + two;
  self->f50 = r;
}
