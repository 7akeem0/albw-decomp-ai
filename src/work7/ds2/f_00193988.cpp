#include "ds2.h"
#ifndef VEC3_DEFINED_D
#define VEC3_DEFINED_D
struct Vec3 { f32 x, y, z; };
#endif
struct SpawnParam {
    SpawnParam() : m1c(0), m20(0), m24(0), m48(0), m4c(0), m2c0(0) { reset(); }
    void reset();
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
u32 func_0019B04C(void*);
extern void* ro_00693280;
extern void* data_00706E20;
void func_004C43E0(void*, void*);

void func_00193988(Vec3* pos, u32 arg) {
    SpawnParam p;
    p.m0 = func_0019B04C(ro_00693280);
    p.m4c = arg;
    p.m4 = *pos;
    p.m20 = 0;
    func_004C43E0(data_00706E20, &p);
}
