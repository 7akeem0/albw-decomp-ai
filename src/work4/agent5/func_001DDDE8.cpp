#include "a5.h"

// 0x1DDDE8: PlayerMgr (*data_0070FB60) forwarding wrapper, other TU; original is
// 'ldr r0,[r0,#0x10]; b 0x1DDDF0' and armlink turned the branch-to-next into a NOP (KB #68).
struct Vec3 { f32 x, y, z; };
class Player {
public:
    bool setTarget(const Vec3* pos, s32 kind, f32 f);   // 0x1DDDF0
};
class PlayerMgr {
public:
    bool setTarget(const Vec3* pos, s32 kind, f32 f);
    char pad0[0x10];
    Player* mPlayer;
};
bool PlayerMgr::setTarget(const Vec3* pos, s32 kind, f32 f) { return mPlayer->setTarget(pos, kind, f); }
