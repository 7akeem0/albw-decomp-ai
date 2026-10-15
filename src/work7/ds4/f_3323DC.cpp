#include "ds4.h"
struct T23DC { u8 pad[0x495]; u8 b495; u8 pad2[0x4c0-0x496]; u32 m4c0; };
extern void* data_0070FB60;
extern "C" void func_0028F924(void*);
extern "C" u32 func_0052F7F4(void*);
extern "C" void func_002E01FC(void*);
extern "C" void func_006657B4(void*, u32);
void f(T23DC* self) {
  if (self->m4c0 == 0x10) func_0028F924(data_0070FB60);
  if (func_0052F7F4(self) != 0) {
    func_002E01FC(self);
    func_006657B4((u8*)self + 0x4c0, 4);
    self->b495 = 1;
  }
}
