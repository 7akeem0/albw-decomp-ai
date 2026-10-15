#include "ds4.h"
extern u8* data_00706E20;
extern "C" void func_004EDEA0(u32, void*);
extern "C" u8* func_0052FBA0(void*, u32);
extern "C" void func_004FC994(void*, u32);
void f(u8* self) {
  u32 v = *(u32*)(self + 0x2cc);
  func_004EDEA0(*(u32*)(self + 0x430), &v);
  u8* p = func_0052FBA0(data_00706E20 + 0x3dbbc, *(u32*)(self + 0x50));
  if (p != 0) func_004FC994(p + 0x5a8, *(u32*)(self + 0x4d4));
}
