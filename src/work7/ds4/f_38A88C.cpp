#include "ds4.h"
struct OA88C { u8 pad[0xd]; s8 b0d; u8 b0e; };
extern "C" void func_0012C718(void*);
void f(u8* self) {
  u32* p = *(u32**)(self + 0x24);
  u32* end = p + *(u32*)(self + 0x1c);
  while (p != end) {
    OA88C* o = (OA88C*)*p;
    s8 v = o->b0d;
    if (v == 1 || (v == 3 && o->b0e == 3)) func_0012C718(o);
    p++;
  }
  func_0012C718(*(void**)(self + 0x74));
}
