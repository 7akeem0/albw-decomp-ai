#include "../agent2/spawnparam_a2.h"
extern const s32 ro_006938D8;
u32 func_0019B04C(s32 id);
struct Mgr70C8E0;
extern Mgr70C8E0* data_0070C8E0;
s16 func_00581D60(Mgr70C8E0* m);
struct ActorMgr;
extern ActorMgr* data_00706E20;
void func_004C43E0(ActorMgr* m, const SpawnParam& p);
void func_0020695C(const Vec3& pos, u32 a) {
    if (a < 2) {
        SpawnParam p;
        p.m0 = func_0019B04C(ro_006938D8);
        p.m50 = func_00581D60(data_0070C8E0);
        p.m2a = a;
        p.m4.set(pos);
        p.m20 = 0;
        func_004C43E0(data_00706E20, p);
    }
}
