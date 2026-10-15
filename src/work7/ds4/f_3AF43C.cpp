#include "ds4.h"
struct TAF { u8 pad[0x34]; void* m34; u8 b38; u8 b39; };
extern "C" void func_003AB994(TAF*, void*);
extern "C" void func_003AB8DC(TAF*, void*);
extern "C" void func_004CF478(void*, u32, u32);
extern "C" void func_003AF488(TAF*);
void f(TAF* self) {
  u8 b = self->b39;
  void* v = self->m34;
  if (b != 0) func_003AB994(self, v);
  else func_004CF478(v, 0, 0);
  func_003AB8DC(self, self->m34);
  func_003AF488(self);
}
