#include "ds2.h"
extern s32 func_0058A474(void*, u32);
 extern void func_0065E110(void*, int);
struct Obj21D2AC { char pad0[0x8fc]; u32 m8FC; u32 m900; };
void func_0021D2AC(Obj21D2AC* self) {
    u32 a = self->m8FC;
    u32 b = self->m900;
    if (a < b) { self->m8FC = a + 1; return; }
    s32 r = func_0058A474(self, 0x46);
    u8* dst = (u8*)self + 0x8bc;
    int n = r ? 2 : 1;
    func_0065E110(dst, n);
}

