#include "ds4.h"
extern void* data_0070FB60;
struct G { u8 p0[0x1c]; u32 m1c; };
struct P { u8 p0[0x3d0]; u8 v3d0[0x18]; u32 m3e8; u8 p1[0xa1c - 0x3ec]; u32 ma1c; };
struct T { u8 p0[0x48]; P* m48; };
extern "C" void func_003842C0(void*, u32, u32, u32);
extern "C" u32 func_004D80EC(void*, u32, u32);
void f(T* self) {
  P* pp = self->m48;
  func_003842C0((char*)pp + 0x8c0, 0x5a, 0xa, 1);
  P* p = self->m48;
  G* g = (G*)data_0070FB60;
  u32 r = func_004D80EC((char*)p + 0x3d0, g->m1c, p->m3e8);
  p->m3e8 = r;
  p->ma1c = r;
}

