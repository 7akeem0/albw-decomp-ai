// agent2: SpawnParam (0x2C4 B, reset() 0x2DFF7C) as in work5/agent5/func_001D9CA8.cpp, with s16 fields at 0x28/0x2a/0x50..
#ifndef A2_SPAWNPARAM_H
#define A2_SPAWNPARAM_H
typedef unsigned char u8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef signed int s32;
typedef float f32;
#ifndef VEC3_DEFINED
#define VEC3_DEFINED
struct Vec3 { f32 x, y, z; void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; } };
#endif
struct SpawnParam {
    SpawnParam() : m1c(0), m20(0), m24(0), m48(0), m4c(0), m2c0(0) { reset(); }
    void reset();   // 0x2DFF7C (memclr4 0x2c4 + defaults)
    u32 m0;
    Vec3 m4;
    u32 m10[3];
    u32 m1c;
    u32 m20;
    u32 m24;
    s16 m28;
    s16 m2a;
    u32 m2c[6];
    f32 m44;
    u32 m48;
    u32 m4c;
    s16 m50, m52, m54, m56;
    u32 m58[(0x2c0 - 0x58) / 4];
    u32 m2c0;
};
#endif
