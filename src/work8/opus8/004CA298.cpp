typedef unsigned char u8;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
extern "C" float sqrtf(float);
struct Vec3 {
    f32 x, y, z;
    void setSub(const Vec3& a, const Vec3& b);
    f32 length() const { return sqrtf(x * x + y * y + z * z); }
    Vec3& setTo(const Vec3& v) { x = v.x; y = v.y; z = v.z; return *this; }
    void set(f32 a, f32 b, f32 c) { x = a; y = b; z = c; }
    f32 setLength(f32 t) { const f32 len = length(); if (len > 0.0f) { const f32 s = t / len; x *= s; y *= s; z *= s; } return len; }
};
struct Random {
    u32 getU32();
    f32 getF32();
    f32 getF32(f32 max);
    f32 getF32Range(f32 a, f32 b);
};
f32 Random::getF32() { return getU32() * (1.0f / 4294967296.0f); }
f32 Random::getF32(f32 max) { return getF32() * max; }
f32 Random::getF32Range(f32 a, f32 b) { return getF32(b - a) + a; }
struct Sys { char pad[0x660]; Random mRandom; };
extern Sys* data_007124F0;
Vec3* func_00520FC0();
s32 func_0068C690(const Vec3& v);

struct BitFlag32 { u32 v; void reset(u32 f) { v &= ~f; } };
struct Obj {
    u8 pad0[0x3d0];
    Vec3 m3d0;
    Vec3 m3dc;
    s32 m3e8;
    u8 pad3ec[0x59c - 0x3ec];
    BitFlag32 mFlags;
    void func_004CA298();
};
static void calcDir(Vec3& out, Obj* o) { out.setSub(*func_00520FC0(), o->m3d0); out.y = 0.0f; }

void Obj::func_004CA298() {
    Vec3 dir;
    Vec3* pd = &dir; pd->setSub(*func_00520FC0(), m3d0); dir.y = 0.0f;
    if (dir.x == 0.0f && dir.z == 0.0f) {
        dir.x = data_007124F0->mRandom.getF32Range(-0.1f, 0.1f);
        dir.z = data_007124F0->mRandom.getF32Range(-0.1f, 0.1f);
    }
    dir.setLength(-0.1f);
    m3e8 = func_0068C690(m3dc.setTo(dir));
    mFlags.reset(0x10);
}
