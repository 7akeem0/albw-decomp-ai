#include "ds3.h"
struct S2C9B { char pad[0x4b8]; char c4b8[8]; };
extern "C" void func_001E5B70(S2C9B*, f32);
extern "C" void func_001E5DA8(S2C9B*);
extern "C" bool func_001E5B38(S2C9B*);
extern "C"  void func_00663810(void*, s32);
void func_002C9BB0(S2C9B* p) {
    func_001E5B70(p, 0.008f);
    func_001E5DA8(p);
    if (func_001E5B38(p)) func_00663810(p->c4b8, 0);
}
