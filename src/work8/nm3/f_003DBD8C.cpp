#include "ds4.h"
struct TBD8C { u8 pad[0xc]; u8 b0c; s8 b0d; };
extern "C" u32 func_003DC2E4();
extern "C" u32 func_003DC364(u32, u32, u32);
u32 f(TBD8C* self, u32 a1) {
  if (self->b0c != 0 && self->b0d == -1 && (a1 == 0 || a1 == 1)) {
    u32 h = func_003DC2E4();
    u32 r = func_003DC364(h, 1, a1) != 0;
    if (r) self->b0d = (s8)a1;
    return r;
  }
  return 0;
}
