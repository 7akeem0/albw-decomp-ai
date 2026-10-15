#include "ds3.h"
struct S2A4Da { char pad[0x9e0]; char c9E0[0x40]; char g[0xb92-0xa20]; u8 bB92; };
extern "C" void func_0058AC38(S2A4Da*);
extern "C" bool func_0058ACC8(S2A4Da*);
extern "C"  void func_00662128(void*, s32);
void func_002A4DAC(S2A4Da* p) {
    func_0058AC38(p);
    if (!func_0058ACC8(p)) return;
    if (p->bB92 < 3) func_00662128(p->c9E0, 5);
    else func_00662128(p->c9E0, 1);
}
