#include "ds4.h"
struct InnerBEC { u8 pad[2]; s8 m2; };
struct UBEC { u8 pad[0x2c]; InnerBEC* m2c; };
struct TBEC { u8 pad[0x10]; u8* m10; };
extern "C" u32 func_0014F804(void*);
extern "C" u32 func_001DE958(void*);
u32 f(TBEC* self, UBEC* a1) {
  if (a1->m2c != 0) {
    if (a1->m2c->m2 == -1) return 0;
  }
  if (func_0014F804((u8*)a1 + 0x28) != 0) {
    func_001DE958(self->m10);
    return 1;
  }
  return 0;
}
