#include "ds4.h"
struct T { u8 p[0x1e9]; u8 b1e9; u8 p2[2]; void* m1ec; };
extern void* data_00712F70;
extern void* data_00709DF8;
extern "C" void func_0014B1D4(void*, u32, u32);
void f(T* self) {
  if (self->b1e9 != 1) return;
  char* p = (char*)self->m1ec;
  if ((u8)p[0x50] != 2) return;
  func_0014B1D4(data_00712F70, 1, 1);
  u8* q = (u8*)data_00709DF8; q[0x65] = 0;
}
