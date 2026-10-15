#include "ds4.h"
struct G324 { u8 pad[0x338]; u32 m338; };
struct T324 { u8 pad[0x68]; u32 m68; u32 m6c; };
extern void* data_0070FB60;
extern G324* data_007142C8;
extern "C" u32 func_005568D4(void*);
void f(T324* self) {
  void* g = data_0070FB60;
  if (g) {
    u32 v = func_005568D4(g);
    self->m68 = v;
    self->m6c = v;
    data_007142C8->m338 = v;
  } else {
    s32 v = -1;
    self->m68 = v;
    self->m6c = v;
  }
}
