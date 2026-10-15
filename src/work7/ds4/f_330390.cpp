#include "ds4.h"
extern void* data_00712468;
struct O { u8 p0[0x1f0]; u8 b1f0; };
extern "C" void func_00580CE4(void*);
extern "C" void func_004A0AA8(void*);
void f(O* self) {
  if (!self->b1f0) return;
  u8* m = (u8*)data_00712468;
  if (!m[0x22]) return;
  func_00580CE4((char*)self + 0x1d8);
  func_004A0AA8((char*)self + 0x10);
}
