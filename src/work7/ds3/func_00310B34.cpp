#include "ds3.h"
struct S310B { char pad[0xad4]; u8 bAD4; char g1[0xad8-0xad5]; u32 mAD8; char g2[0xae1-0xadc]; u8 bAE1; };
extern "C" void* data_007142C8;
extern "C" bool func_0058DC8C(void*);
extern "C" u32 func_0058DFDC(void*);
extern "C" void func_00625B9C(S310B*);
void func_00310B34(S310B* p) {
    if (!func_0058DC8C(data_007142C8)) return;
    u32 v = func_0058DFDC(data_007142C8);
    if (v == 0x2d) p->bAE1 = 1;
    else p->mAD8 = v;
    p->bAD4 = 1;
    func_00625B9C(p);
}
