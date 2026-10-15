#include "ds4.h"
struct Impl9C { u8 pad[0x8bc]; void* p8bc; };
struct Mid9C { u8 pad[0x8bc]; u8* p8bc; };
struct T9C { u32 m0; Mid9C* m4; u8 pad[0x2c]; u32 m34; };
extern "C" void func_003AB994(T9C*, u32);
extern "C" void func_003AB8DC(T9C*, u32);
extern "C" void func_00399ED4(T9C*);
void f(T9C* self) {
  if (self->m4->p8bc[0xa] == 0) return;
  func_003AB994(self, self->m34);
  func_003AB8DC(self, self->m34);
  func_00399ED4(self);
}
