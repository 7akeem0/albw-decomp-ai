#define EN_EXTRA void f(s32 a, DmgInfo* p);
struct DmgInfo;
#include "en206.h"
struct DmgInfo { char pad[0x24]; s8 m24; u8 m25; u8 m26; };
void En::f(s32 a, DmgInfo* p) {
    if (m3a0 == m91c) return;
    u8 kind = m510->m4;
    if (kind == 15) {
        s8 k = p->m24;
        u8 t = p->m26;
        if ((k != -1 && k != 31) || t == 12) {
            func_00150A84(this, "SE_DeadRock_DAMAGE", 0);
            if (k == 5) m918 = 1;
        }
    }
    if (func_0058AB74(this) == 4 || (u32)(kind - 5) <= 4) return;
    if (kind == 0 || kind == 2) return;
    if (kind == 10) return;
    func_004FABDC(this, 4, -1, 0);
    f32 one = 1.0f;
    func_004FB4E0(this, one);
    func_004FAB60(this, 1, 0);
    func_004FB070(this, 0.0f);
    func_004FB4C4(this, one);
}
