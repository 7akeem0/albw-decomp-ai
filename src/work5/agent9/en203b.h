// agent9: second enemy class in 0x203F34.. (state table ro 0x6959A0, StateMgr @0x8f0 changeState 0x65D3A8)
typedef unsigned int u32; typedef int s32; typedef unsigned short u16; typedef short s16;
typedef unsigned char u8; typedef signed char s8; typedef float f32;
struct Vec3 { f32 x, y, z; };
struct StateMgrB { void changeState(int s) __attribute__((weak)); };   // 0x65D3A8
struct En203B;
Vec3* func_00520FC0(En203B* e);   // getPlayerPos
void func_002046C8(En203B* e, const Vec3* target, u32 a, f32 speed);
bool func_00521100(En203B* e, f32 dy);
f32 func_00521298(En203B* e);    // distSqXZ to player
struct Data70A6C8 { u32 m0; u32 m4; };
extern Data70A6C8 data_0070A6C8;
inline void approach(f32& v, f32 t, f32 r) { v += (t - v) * r; }
inline f32 distSqXZ(const Vec3& a, const Vec3& b) { f32 dx = b.x - a.x; f32 dz = b.z - a.z; return dx * dx + dz * dz; }
#ifndef EN_EXTRA
#define EN_EXTRA
#endif
struct En203B {
    char p0[8];
    Vec3 m8;            // 0x8 home
    char p14[0x3d0 - 0x14];
    Vec3 m3d0;          // 0x3d0 pos
    char p3dc[0x8bc - 0x3dc];
    f32 m8bc;           // 0x8bc speed
    char p8c0[0x8f0 - 0x8c0];
    StateMgrB mState;   // 0x8f0
    EN_EXTRA
};
