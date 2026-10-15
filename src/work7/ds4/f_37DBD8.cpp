#include "ds4.h"
struct O { char pad[0x420]; u32 m420; };
extern "C" void* data_0070FB60;
extern "C" s32 func_00556914(void*);
extern "C" void func_00588C14(O*, s32, s32);
s32 func_0037DBD8(O* p) {
  if (func_00556914(data_0070FB60) != 0) {
    func_00588C14(p, 0, 1);
    p->m420 = 1;
  }
  return 0;
}
