#include "ds4.h"
struct T5A320 { u8 pad[0x3e8]; u32 m3e8; u8 pad2[0x40c-0x3ec]; u8* m40c; u32 m410; };
extern "C" void func_004D8AEC(void*, u32, void*);
extern "C" void func_00169A80(void*);
extern "C" void func_00168E9C(u32, u8*, u32);
extern "C" void func_004CEAF0(void*);
extern "C" void func_0014E138(T5A320*, u32);
void f(T5A320* self, u32 a1) {
  u8* x = self->m40c;
  *(u32*)(x + 0x164) = *(u32*)(x + 0x164) | 0x40000000;
  func_004D8AEC(x + 0x80, self->m3e8, (u8*)self + 0x3d0);
  if (self->m410 != 0) {
    func_00169A80((void*)self->m410);
    func_00168E9C(self->m410, self->m40c, 0);
  }
  func_004CEAF0(self->m40c);
  func_0014E138(self, a1);
}
