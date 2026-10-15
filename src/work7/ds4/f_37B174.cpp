#include "ds4.h"
extern void* data_00714248;
extern void* data_00711DE8;
struct O174 { u8 pad[0x9c0]; u32 m9c0; };
extern "C" void func_002DF63C(void*);
extern "C" u32 func_004C4218(void*);
extern "C" __attribute__((weak)) void func_0066777C(void*, u32);
void f(u8* self) {
  func_002DF63C(data_00714248);
  O174* o = (O174*)data_00711DE8;
  if (o->m9c0 > 1) return;
  if (func_004C4218(o) == 0) return;
  func_0066777C(self + 0xc0, 6);
}
