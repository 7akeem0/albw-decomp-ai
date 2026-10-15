#include "ds4.h"
extern "C" void* func_0058A7D4(void*);
extern "C" u32 func_00111A64(void*);
struct T50 { u8 p0[0x48]; void* m48; u8 p1[0x50 - 0x4c]; f32 m50; };
static f32 mkU(u32 u) { return (f32)u * 2.3283064e-10f; }
void func_003C501C(T50* self) {
  void* r = func_0058A7D4(self->m48);
  f32 range = 3.4f;
  f32 t = mkU(func_00111A64(r)) * range;
  self->m50 = t + 2.6f;
}
