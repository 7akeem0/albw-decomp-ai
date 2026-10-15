#ifndef A5_SUB6E4_H
#define A5_SUB6E4_H
#include "a5.h"

struct Vec3 {
    f32 x, y, z;
};

// element of the PtrArray in Sub6E4::m0 (+0x20 num, +0x24 max, +0x28 ptrs)
struct Ent6E4 {
    char pad[0x18];
    Vec3 m18;
    char pad24[0x44 - 0x24];
    u32 m44[1];
};
struct Res6E4 {
    char pad[0x20];
    s32 mPtrNum;
    s32 mPtrNumMax;
    Ent6E4** mPtrs;
    Ent6E4* get(s32 i) const {
        if (mPtrs != 0 && (u32)i < (u32)mPtrNum)
            return mPtrs[i];
        return 0;
    }
};

// Cls+0x6E4, 0x28 bytes, ctor 0x1E6898
struct Sub6E4 {
    Sub6E4();
    bool getPos(Vec3* out) const;       // 0x1E6680
    u32 getParam(s32 j) const;          // 0x1E66D8
    bool getFirstPos(Vec3* out) const;  // 0x1E6720

    Res6E4* m0;
    f32 m4, m8, mc;
    u32 m10, m14, m18;
    f32 m1c;
    s8 m20, m21;
    u8 m22, m23, m24, m25, m26, m27;
};
#endif
