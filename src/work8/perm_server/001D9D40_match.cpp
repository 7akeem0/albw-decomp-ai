typedef unsigned int u32;
typedef signed int s32;
typedef float f32;
struct Vec3 { f32 x, y, z; };
extern const s32 ro_00693120;
u32 func_0019B04C(s32 id);
struct ActorMgr;
extern ActorMgr* data_00706E20;
struct SpawnParam {
    SpawnParam() : m1c(0), m20(0), m24(0), m48(0), m4c(0), m2c0(0) { reset(); }
    void reset();   
    u32 m0;
    Vec3 m4;
    u32 m10[3];
    u32 m1c;
    u32 m20;
    u32 m24;
    u32 m28[7];
    f32 m44;
    u32 m48;
    u32 m4c;
    u32 m50[(0x2c0 - 0x50) / 4];
    u32 m2c0;
};
void func_004C4AF4(ActorMgr* m, const SpawnParam& p, s32 z);


void func_001D9D40(const Vec3& pos, u32 arg, bool b, u32 c) {
    u32 a = arg;
    SpawnParam p;
    p.m0 = func_0019B04C(ro_00693120);
    p.m4 = pos;
    p.m20 = a;
    p.m4c = c; __schedule_barrier();
    p.m44 = b ? 1.0f : 0.0f;
    func_004C4AF4(data_00706E20, p, 0);
}
