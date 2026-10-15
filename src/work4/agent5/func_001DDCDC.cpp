#include "a5.h"

s32 func_00255BAC(s32 id);      // id < 0 ? 0x2d : id
struct ItemTable {              // Player+0x40C, s32 table at +0x94 indexed by id (0x12..0x16)
    s32 get(s32 id);            // 0x537C14: valid ? m94[id] : 0xe
    s32 set(s32 id, s32 v);     // 0x2551F0
};

class Player {
public:
    bool tryAddItem(s32 kind);
    char pad0[0x40c];
    ItemTable m40c;
    char pad40d[0x694 - 0x40d];
    StateSlot mSlots[3];
};

bool Player::tryAddItem(s32 kind) {
    s32 v = 0xe;
    switch (kind) {
    case 0x12: v = 5; break;
    case 0x13: v = 6; break;
    case 0x14: v = 7; break;
    case 0x17: v = 8; break;
    case 0x18: v = 9; break;
    case 0x19: v = 10; break;
    }
    if (v == 0xe)
        return false;
    StateSlot* s = mSlots;
    s32 a = func_00255BAC(mSlots[1].current);
    if (m40c.get(a) == 0) {
        m40c.set(a, v);
        return true;
    }
    s32 b = func_00255BAC(s[2].current);
    if (m40c.get(b) == 0) {
        m40c.set(b, v);
        return true;
    }
    return false;
}
