#include "../agent2/spawnparam_a2.h"
// 0x1DB5B4 Cls::spawnFollower(u32 angle): spawn actor (id by mode m440) at m3d0 + dir(angle) * XZ-dist(model pos, m3d0)
extern const s32 ro_00693134;
extern const s32 ro_00693138;
extern const s32 ro_0069313C;
u32 func_0019B04C(s32 id);
struct Actor { char pad[0x2cc]; u32 m2cc; };
struct ActorMgr {            // Game+0x3DBBC
    u32 mNum;
    Actor** mPtrs;
    u32 mFreeHint;
    Actor** mEnd;
};
Actor* func_0052FBA0(ActorMgr* mgr, u32 handle);
struct Game {
    Actor** findNext(s32 id, Actor** from);   // 0x5841A8
    char pad[0x3dbbc];
    ActorMgr actors;
};
extern Game* data_00706E20;
Actor* func_004C4AF4(Game* g, const SpawnParam& p, s32 z);
struct Mtx34 { f32 m[3][4]; };
struct Model600;
Mtx34* func_0053ED3C(Model600* m);
void func_004D80A4(Vec3* out, u32 angle, f32 len);
inline void setAdd(Vec3* o, const Vec3& a, const Vec3& b);
struct V3 { void setAdd(const Vec3& a, const Vec3& b); };   // 0x115C54
struct Cls {
    virtual void vf0();
    bool spawnFollower(u32 angle);
    char pad[0x2cc - 4];
    u32 m2cc;
    char pad2d0[0x3d0 - 0x2d0];
    Vec3 m3d0;
    char pad3dc[0x440 - 0x3dc];
    s32 m440;
    char pad444[0x600 - 0x444];
    Model600* m600;
    char pad604[0x62c - 0x604];
    u32 m62c;
};
inline f32 distSqXZ(const Vec3& a, const Vec3& b) { f32 dx = b.x - a.x; f32 dz = b.z - a.z; return dx * dx + dz * dz; }
bool Cls::spawnFollower(u32 angle) {
    ActorMgr* mgr = &data_00706E20->actors;
    if (m440 == 3) {
        s32 n = 0;
        for (Actor** it = data_00706E20->findNext(ro_0069313C, mgr->mPtrs); it != data_00706E20->actors.mEnd;
             it = data_00706E20->findNext(ro_0069313C, it + 1))
            n++;
        if (n >= 3)
            return false;
    } else if (func_0052FBA0(mgr, m62c))
        return false;
    Mtx34* mtx = func_0053ED3C(m600);
    Vec3 pos;
    Vec3& q = pos;
    q.x = mtx->m[0][3];
    q.y = mtx->m[1][3];
    q.z = mtx->m[2][3];
    func_004D80A4(&q, angle, __sqrtf(distSqXZ(m3d0, q)));
    q.y = 0.0f;
    ((V3*)&q)->setAdd(q, m3d0);
    pos.y = m3d0.y + 0.8f;
    s32 id = ro_00693134;
    if (m440 == 1)
        id = ro_00693138;
    else if (m440 == 3)
        id = ro_0069313C;
    SpawnParam p;
    p.m0 = func_0019B04C(id);
    p.m4 = pos;
    p.m20 = angle;
    p.m4c = m2cc;
    Actor* a = func_004C4AF4(data_00706E20, p, 0);
    m62c = a->m2cc;
    return true;
}
