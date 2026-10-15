#include "ds4.h"
struct Flag { u32 v; void change(u32 m, bool on) { if (on) v |= m; else v &= ~m; } };
struct O { char pad[0x59c]; Flag m59c; };
extern "C" void func_004FABDC(O*, s32, s32, s32);
extern "C" void func_003C26B8(void*);
extern "C" void func_003C2630(void*);
void func_003C25F0(O* p) {
  p->m59c.change(4, false);
  p->m59c.change(0x80, false);
  func_004FABDC(p, 1, -1, 0);
  func_003C26B8((char*)p + 0x8e0);
  func_003C2630((char*)p + 0x8e0);
}
