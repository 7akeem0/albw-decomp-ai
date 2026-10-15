#include "include/player_calc_types.h"

void Cls::calc() {
    if (m6bb) {
        func_002927A0(m614, m608, true);
        return;
    }
    m71c = m3e8;
    updateHandle();
    if (func_00540048(m614)) {
        Loop loop(m694, 0);
        for (; loop.i < 3; ++loop.i)
            loop.get().update();
    }
    
    float* pv = &m5b0;
    chase(pv, m5a8, cChaseStep);
    if (func_002D3CD4(m5f8, m5ac, func_0053F998(m614), func_0053F4BC(m614), m4cc != 0))
        func_001DCE44(1, 0);
    bool hasPlayer = data_0070B728->m44 != 0;
    func_0031E324(m5fc, m5ac, hasPlayer);
    func_003426E4(m604);
    m604->m15c = 1.0f;
    m59c.setZero();
    func_001DD1D8();
    func_002927A0(m614, m608, hasPlayer);
    func_00342C24(m604, func_0053F910(m614), m614->isKind(8));
    func_00361C34(m608);
    func_001DC9C8();
    func_002D12F8(m618);

    u32 kind=m599;
    u32 cur=m598;
    u8 max = 12;
    switch (kind) {
    case 0x0c:
        max = 4;
        break;
    case 0x10:
    case 0x14:
        max = 6;
        break;
    case 0x18:
    case 0x1c:
        max = 8;
        break;
    case 0x20:
    case 0x24:
        max = 10;
        break;
    }
    if (cur <= max && cur != 0) {
        if ((data_0070B728 == 0 || data_0070B728->m44 == 0) && !m6c3)
            func_00587B50(data_00711F50, "SE_S_HART_WARNING", 0);
    }
    func_001DCF58();
    m614->mcd = 1;
    func_002904F8(m614);

    PlayerMgr* pm = data_0070B728;
    s8 old = m6c2;
    m6c2 = pm->m44 != 0 && pm->m44 != m614->m70;
    int special;
    Actor* actor = m614;
    const void* player = pm->m44;
    const void* rider = actor->m68;
    if (isSame(player, rider)) {
        int st = actor->m42;
        special = st == 0x24 || st == 0x1a || st == 0x11 || st == 0x12 || st == 0x13 || st == 0x14 || st == 0x18;
    } else {
        special = false;
    }
    if (!old && m6c2 && !special) {
        m3dc.set(0.0f,0.0f,0.0f);
    }
    m6bf = 0;
    m6c7 = 0;
    EventState* ev = data_00709DF8;
    if (ev->m18 == 0 && ev->m1c == 0x2a)
        m614->m7c = 1;
    if (ev->m18 == 5 && ev->m1c == 9)
        m614->m7c = 1;
    if (ev->m18 == 0x16 && ev->m1c == 2)
        m614->mcd = 0;
    if (ev->m18 == 4 && ev->m1c == 0xe)
        m614->m7c = 1;
    if (ev->m18 == 2 && ev->m1c == 0 && func_00584B94(pm, 0xf2))
        m614->m7c = 1;
}
