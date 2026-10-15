#include "a5.h"

// 0x1DDCD4: PlayerMgr forwarder (other TU) -> tail call to Player::tryAddItem 0x1DDCDC (branch-nop)
class Player {
public:
    bool tryAddItem(s32 kind);   // 0x1DDCDC
};
class PlayerMgr {
public:
    bool tryAddItem(s32 kind);
    char pad0[0x10];
    Player* mPlayer;
};
bool PlayerMgr::tryAddItem(s32 kind) { return mPlayer->tryAddItem(kind); }
