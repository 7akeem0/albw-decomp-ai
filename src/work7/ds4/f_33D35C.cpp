#include "ds4.h"
extern u8* data_00706E20;
extern u32 ro_00693914;
extern "C" void* func_0052FBA0(void*, u32);
extern "C" u32 func_00588BE4(void*);
bool f(u32 unused, u8* a1) {
  void* m = data_00706E20 + 0x3dbbc;
  void* r = func_0052FBA0(m, *(u32*)(a1 + 0x28));
  if (!r) return false;
  return func_00588BE4(r) == ro_00693914;
}
