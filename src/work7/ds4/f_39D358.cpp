#include "ds4.h"
struct O { char pad0[0x50]; u32 m50; };
extern "C" void* data_00706E20;
extern "C" void* func_0052FBA0(void*, u32);
extern "C" void func_00668934(void*, s32) __attribute__((weak));
void func_0039D358(O* p) {
  u32 h = p->m50;
  if (func_0052FBA0((char*)data_00706E20 + 0x3dbbc, h) == 0)
    func_00668934((char*)p + 0x40c, 2);
}
