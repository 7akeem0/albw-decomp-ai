#include "range.h"
struct Sub { char pad[0x10c]; u32 mask; };
struct P { char pad[0x14]; Sub* m14; };
struct G { char pad[0x23]; u8 flag; };
extern G* data_00712468;
__declspec(noinline) u32 func_0054CE64(P* p, s32 k) { u32 a=(u32)k; u32 b=a+1; u32 c=b*3; u32 d=c^a; return d+b+c; }
bool v54CA3C(P* p) {
    u32 m = func_0054CE64(p, 4);
    if (!m) return false;
    if (m & p->m14->mask) return false;
    return data_00712468->flag == 0;
}
