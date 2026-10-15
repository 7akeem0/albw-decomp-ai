#include "ds4.h"
struct T7090 { u8 pad[0x37]; u8 b37; };
extern u8* data_00706E20;
extern u32 ro_006930E0;
extern "C" void* func_0052FBA0(void*, u32);
extern "C" u32 func_00588BE4(void*);
u32 f(T7090* self, u8* a1) {
  void* r = func_0052FBA0(data_00706E20 + 0x3dbbc, *(u32*)(a1 + 0x28));
  if (r != 0) {
    if (func_00588BE4(r) == ro_006930E0) self->b37 = 1;
  }
  return 1;
}
