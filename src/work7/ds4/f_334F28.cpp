#include "ds4.h"
extern u32 ro_00693090;
extern "C" u32 func_00588BE4(void*);
extern "C" u32 func_002ACC68(void*);
extern "C" __attribute__((weak)) void func_006658F8(void*, u32);
void f(u8* self) {
  self[0x4cd] = 1;
  self[0x4cc] = 1;
  if (func_00588BE4(self) == ro_00693090) {
    if (func_002ACC68(self + 0x3d0) == 0) {
      if (*(f32*)(self + 0x3d4) > 0.0f) { func_006658F8(self + 0x504, 0); return; }
    }
  }
  if (*(s32*)(self + 0x504) > 0x76) {
    if (*(u16*)(self + 0x2e) == 1) { self[0x2d7] = 1; return; }
    func_006658F8(self + 0x504, 4);
  }
}
