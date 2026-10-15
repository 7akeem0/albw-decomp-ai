#include "../agent2/spawnparam_a2.h"
// Cls::trySpawn30(): if m614->ma4 > 30 and the item table has a kind -> spawn actor ro_00693130 at m3d0
extern const s32 ro_00693130;
u32 func_0019B04C(s32 id);
struct ActorMgr;
extern ActorMgr* data_00706E20;
bool func_004C4AF4(ActorMgr* m, const SpawnParam& p, s32 z);
struct ItemTable40C { s32 getKind(); };   // 0x537B48 (m28 2..5 -> 0..3)
struct Actor { char pad[0xa4]; s32 ma4; };
struct Cls {
    virtual void vf0();
    bool trySpawn();
    char pad[0x3d0 - 4];
    Vec3 m3d0;
    char pad3dc[0x3e8 - 0x3dc];
    u32 m3e8;
    char pad3ec[0x40c - 0x3ec];
    ItemTable40C m40c;
    char pad40d[0x614 - 0x40d];
    Actor* m614;
};
bool Cls::trySpawn() {if (m614->ma4 > 0x1e && m40c.getKind()) { SpawnParam p;
        p.m0 = func_0019B04C(ro_00693130);
        p.m4 = m3d0;
        p.m20 = m3e8;
        p.m28 = m40c.getKind();
 if (func_004C4AF4(data_00706E20, p, 0)) { m614->ma4 = 0; return true; } } return false;}
