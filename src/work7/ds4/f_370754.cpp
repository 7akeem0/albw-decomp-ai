#include "ds4.h"
extern "C" void func_0037081C(void*, void*);
void f(u8* self, u8* a1) {
  func_0037081C(self, a1);
  self[1] = (u8)((*(u16*)(a1 + 0x36) & 0x8000) >> 15);
  self[3] = (u8)((*(u16*)(a1 + 0x36) & 0x2000) >> 13);
  self[4] = (u8)((*(u16*)(a1 + 0x36) & 0x1000) >> 12);
  self[5] = (u8)((*(u16*)(a1 + 0x36) & 0x4000) >> 14);
  self[6] = a1[0x34];
}
