#include "ds4.h"
struct T5CC { u32 pad0[0x103]; void* m40c; void* m410; u8 pad[0x3c]; u32 m450; };
extern "C" void func_004CF478(void*, u32, u32);
extern "C" void func_00151148(void*, u32);
void f(T5CC* self) {
  void* a = self->m40c;
  self->m450 = 0;
  void* b = self->m410;
  if (!a || !b) return;
  func_004CF478(a, 1, 0);
  func_00151148(b, 1);
}
