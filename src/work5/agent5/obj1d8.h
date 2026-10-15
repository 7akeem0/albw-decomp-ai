// agent5 round 5: actor class whose StateMgr PMF table is at ro 0x6A2A74.. (state fns 0x1D8968..0x1D9418)
#ifndef OBJ1D8_H
#define OBJ1D8_H
typedef unsigned int u32;
typedef signed int s32;
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef signed short s16;
typedef float f32;

// anim player array (same shape as agent7's work5/agent7/anim9e4.h): elem 0x?? with frame m8, rate m10, dirty m26
struct AnimElem {
    u32 m0, m4; f32 m8; u32 mC; f32 m10; f32 m14; u32 m18; u8 m1c; u8 pad1d[0x26 - 0x1d]; u8 m26;
    void setFrame(f32 f) { if (m8 != f) { m8 = f; m26 = 1; } }
    // 1D935C MATCH: zero as a LOCAL after the loop test (vcmpe vs s0, no int compare); rate>=0 arm first
    bool isEnd() const { if (m1c) return false; f32 z = 0.0f; if (m10 >= z) return m8 == m14; return m8 <= z; }
};
// operator[] bounds check keeps the dead 'ldr r1,[r0,#0xc]' (mNum) before 'ldr r0,[r0,#0x14]' for index 0
struct AnimArr {
    u32 pad[3]; s32 mNum; s32 mMax; AnimElem* mData;
    AnimElem& operator[](s32 i) { if ((u32)i < (u32)mNum) return mData[i]; return mData[0]; }
};
typedef AnimArr Ctl;
inline void approach(f32& v, f32 t, f32 r) { v += (t - v) * r; }
struct Angle { s32 v; Angle() {} Angle(s32 x) : v(x) {} };
struct Info43C { char pad[0x21]; s8 m21; u8 m22; u8 m23; };
struct Vec3 { f32 x, y, z; Vec3() {} Vec3(f32 a, f32 b, f32 c) : x(a), y(b), z(c) {}
    void setSub(const Vec3& a, const Vec3& b);   // 0x115C70
};
struct ModelRes { u32 m0; s32 m4; };
struct Ang2 { s32 x, z; };
struct Mtx34 { f32 m[3][4]; };
void func_00491E80(Mtx34* m, s32 rx, s32 ry, s32 rz);   // makeR (angles)
struct Model40C {
    char pad[0x20]; ModelRes* m20; char pad24[0x74 - 0x24];
    Vec3 mScale;     // 0x74
    Mtx34 mMtx;      // 0x80
    char padb0[0x104 - 0xb0];
    Mtx34 m104;      // world mtx
    char pad134[0x158 - 0x134];
    f32 m158;
    char pad15c[0x164 - 0x15c];
    u32 m164;        // bit 30 = mtx dirty
    void setDirty() { m164 |= 0x40000000; }
    void setRotXZ(const Ang2& a) { setDirty(); func_00491E80(&mMtx, a.x, 0, a.z); }
    void setTrans(const Vec3& t) { setDirty(); mMtx.m[0][3] = t.x; mMtx.m[1][3] = t.y; mMtx.m[2][3] = t.z; }
    void setScale(const Vec3& s) { setDirty(); mScale.x = s.x; mScale.y = s.y; mScale.z = s.z; }
};
void func_00588C14(void* self, s32 a, s32 b);
void func_0034C8F0(void* a, void* b, int c);

struct Obj1D8 {
#ifdef OBJ1D8_EXTRA
    OBJ1D8_EXTRA
#endif
    void func_001D87DC(s32 a, f32 b);
    Vec3* getPlayerPos();   // 0x520FC0 (actor base, ignores this)
    char pad0[0x5e];
    s16 m5e;
    char pad60[0x2cc - 0x60];
    u32 m2cc;    // own handle
    char pad2d0[0x2d4 - 0x2d0];
    u8 m2d4;
    char pad2d5[0x2d7 - 0x2d5];
    u8 m2d7;
    char pad2d8[0x3a0 - 0x2d8];
    void* m3a0;
    char pad3a4[0x3d0 - 0x3a4];
    Vec3 m3d0;   // position
    char pad3dc[0x40c - 0x3dc];
    Model40C* m40c;
    Ctl* m410;
    char pad414[0x438 - 0x414];
    void* m438;
    Info43C* m43c;
    char pad440[0x468 - 0x440];
    void* m468;
    Vec3 m46c;
    f32 m478;
    f32 m47c;
    s32 m480;
    Angle m484;  // 4-byte struct: stored via the this+0x400 base (KB #141 8-bit-offset plan)
    Ang2 m488;   // rot x / z angles (passed as a struct: args loaded AFTER the dirty-flag store)
    char pad490[0x49c - 0x490];
    u8 m49c;
    u8 m49d;
    s8 m49e;
    u8 m49f;
};
#endif
