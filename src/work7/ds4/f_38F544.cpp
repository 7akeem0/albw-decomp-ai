#include "ds4.h"
struct T544 { u8 pad[0x330]; u8 b330; };
struct G544 { u8 pad[0x44]; void* m44; };
extern G544* data_0070B728;
extern "C" void func_0038F58C(T544*);
extern "C" u32 func_004ECEFC(T544*, u32);
u32 f(T544* self, u32 a1) {
  if (self->b330 == 1 && a1 == 0) {
    if (data_0070B728->m44) func_0038F58C(self);
  }
  return func_004ECEFC(self, a1);
}
