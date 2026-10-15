#include "ds4.h"
struct Rnd { u32 rnd(); u32 getU32(u32 n) { return ((u64)rnd() * n) >> 32; } };
struct O { char pad0[0xc60]; u32 mC60; char pad1[0xc93 - 0xc64]; u8 mC93; char pad2[0xc96 - 0xc94]; s8 mC96; };
extern "C" Rnd* func_0058A7D4(O*);
extern "C" u32 func_00111A64(Rnd*);
void func_00329F74(O* p) {
  u32 v = func_0058A7D4(p)->getU32(30);
  s32 base = p->mC96 ? 0 : 30;
  p->mC60 = base + v + 1;
  p->mC93 = 1;
}
