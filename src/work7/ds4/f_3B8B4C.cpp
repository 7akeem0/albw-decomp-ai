#include "ds4.h"
struct Sub { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); };
struct Obj { char pad[0xbd4]; Sub mBD4; };
struct O { char pad0[0x48]; Obj* m48; char pad1[0x92 - 0x4c]; u16 m92; };
struct Rnd { u32 rnd(); u32 getU32(u32 n) { return ((u64)rnd() * n) >> 32; } };
extern "C" Rnd* func_0058A7D4(Obj*);
extern "C" u32 func_00111A64(Rnd*);
void func_003B8B4C(O* p, s32 kind) {
  ((Sub*)((char*)p->m48 + 0xbd4))->v5();
  if (kind == 2) p->m92 = (u16)func_0058A7D4(p->m48)->getU32(0xb);
}
