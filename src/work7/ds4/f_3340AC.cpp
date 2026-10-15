#include "ds4.h"
struct T40AC { u8 pad[0x40c]; void* m40c; u8 pad2[0x41c-0x410]; void* m41c; u8 pad3[0x424-0x420]; u8 b424; u8 pad4[0x428-0x425]; };
extern "C" void func_0014E2A0(void*, void*, void*, u32, u32, u32);
extern "C" void func_004CEAF0(void*);
void f(T40AC* self) {
  if (self->b424 != 0) return;
  func_0014E2A0(self, self->m41c, (u8*)self + 0x428, 0x1508, 0, 0);
  func_004CEAF0(self->m40c);
}
