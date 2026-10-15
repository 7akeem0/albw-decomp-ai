#include "../../work4/agent6/a6.h"
struct Vec3 { f32 x, y, z; };

template <typename T>
struct PtrArray {
    s32 size() const { return mPtrNum; }
    T* at(s32 i) const {
        if ((u32)i < (u32)mPtrNum)
            return mPtrs[i];
        return 0;
    }
    s32 mPtrNum;
    s32 mPtrMax;
    T** mPtrs;
};

struct Follower {
    void setTarget(const Vec3* pos);  // 0x3879AC
};
struct FollowEntry {
    char pad[0x20];
    Follower* m20;
    Follower* m24;
};
struct FollowMgr {
    // loop in an inline member: target pointer computed once after the calls (add r7,r4,#0x3d0)
    inline void setTargets(const Vec3* p) {
        for (int i = 0; i < m90.size(); i++) {
            FollowEntry* e = m90.at(i);
            if (e->m20)
                e->m20->setTarget(p);
            if (e->m24)
                e->m24->setTarget(p);
        }
    }
    char pad[0x90];
    PtrArray<FollowEntry> m90;
};
extern FollowMgr* data_0070BB18;

struct Obj604 { void func_00341240(); };

struct Cls {
    void setPos(const Vec3& pos, u32 w);
    void setPos2(const Vec3& pos, u32 w);
    void func_001DC9C8();
    char pad[0x368];
    Vec3 m368;
    char pad374[0x3d0 - 0x374];
    Vec3 m3d0;
    char pad3dc[0x3e8 - 0x3dc];
    u32 m3e8;
    char pad3ec[0x604 - 0x3ec];
    Obj604* m604;
};
inline void copyVec(Vec3* d, const Vec3& s) { *d = s; }
inline void setVec(Vec3* d, const Vec3& s) { d->x = s.x; d->y = s.y; d->z = s.z; }
inline void setXYZ(Vec3* d, f32 x, f32 y, f32 z) { d->x = x; d->y = y; d->z = z; }
// 0x1DBE4C: setPos without the refresh calls; m3d0 copied from a LOCAL copy -> ldr x3 then str x3 (writeback)
void Cls::setPos2(const Vec3& pos, u32 w) {
    copyVec(&m368, pos);
    Vec3 t = pos;
    copyVec(&m3d0, t);
    m3e8 = w;
    data_0070BB18->setTargets(&m3d0);
}
