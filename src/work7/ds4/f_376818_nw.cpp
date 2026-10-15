#include "ds4.h"
extern "C" u32 func_005438EC(void*);
extern "C"  void func_00667638(void*, u32);
void f(u8* self) {
  if (func_005438EC(*(void**)(self + 0x14)) == 0) return;
  if ((*(u16*)(*(u8**)(self + 0x14) + 0x16) & 0x80) == 0) return;
  if (*(u8*)(self + 0x68) != 1) return;
  func_00667638(self + 0x38, 1);
}
