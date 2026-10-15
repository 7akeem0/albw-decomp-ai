#include "ds4.h"
struct T { u32 m0; void* m4; u8 p8[0x18 - 8]; u8 b18; u8 p19[3]; void* m1c; };
extern "C" void func_00169A80(void*);
extern "C" void func_00168E9C(void*, void*, u32);
extern "C" void* func_0053ED3C(void*);
extern "C" void func_001151EC(void*, void*);
extern "C" void func_004CEAF0(void*);
void f(T* self, char* x) {
  if (((u8*)self->m4)[0x30] && !self->b18) {
    func_00169A80(self->m1c);
    func_00168E9C(self->m1c, self->m4, 0);
  }
  char* p = (char*)self->m4;
  char* q = p + 0x80;
  *(u32*)(p + 0x164) |= 0x40000000;
  func_001151EC(q, func_0053ED3C(*(void**)(x + 0x600)));
  func_004CEAF0(self->m4);
}

