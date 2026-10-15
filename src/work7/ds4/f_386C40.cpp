#include "ds4.h"
struct T6C40 { u8 pad[0x38]; u8 b38; u8 b39; u8 pad2[2]; void* m3c; void* m40; void* m44; };
extern "C" void func_004CF478(void*, u32, u32);
void f(T6C40* self, u32 a1) {
  if (a1 != 0) {
    if (self->b39 != 0 || self->b38 != 0) return;
    func_004CF478(self->m3c, a1, 0);
  } else {
    func_004CF478(self->m3c, a1, 0);
    func_004CF478(self->m40, a1, 0);
    func_004CF478(self->m44, a1, 0);
  }
}
