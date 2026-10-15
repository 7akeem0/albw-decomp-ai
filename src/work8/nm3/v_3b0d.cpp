#include "ds4.h"
struct P { u8 p0[0x8c0]; u8 v8c0[0x936 - 0x8c0]; u8 b936; };
struct T { u8 p0[0x48]; P* m48; };
extern "C" u32 func_003840A0(void*, u32);
extern "C" void func_003842C0(void*, u32, u32, u32);
void f(T* self) {
  P* p = self->m48;
  if (p->b936 == 2) return;
  u8* q = p->v8c0;
  if (func_003840A0(q, 0xa) != 0) return;
  func_003842C0(self->m48->v8c0, 0xa, 0xa, 1);
}
