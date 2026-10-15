typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef int s32; typedef unsigned int u32; typedef float f32;
struct Vec3 { f32 x, y, z; };
struct StateControl { u32 count; };
struct Act { u8 pad[8]; f32 m8; f32 mc; f32 m10; };
extern "C" void* data_00706E20;
extern "C" void* data_0070FB60;
extern "C" Vec3* func_00520FC0(void*);
extern "C" void func_00115C70(Vec3*, const Vec3*, const Vec3*);
extern "C" s32 func_004904CC(f32, f32);
extern "C" f32 func_00219548(void*, f32);
extern "C" s32 func_005211BC(void*, f32, f32);
extern "C" s32 func_00556E64();
extern "C" s32 func_005401E0();
inline f32 dist(const Vec3& a, const Vec3& b) { f32 x = b.x - a.x; f32 z = b.z - a.z; return x * x + z * z; }
extern "C" __declspec(noinline) bool func_00219630(Act* o, const Vec3* p, f32 r) { f32 d = dist(*(const Vec3*)&o->m8, *p); if (r * r < d) return false; return true; }
extern "C" void func_0065DF0C(StateControl*, s32);
extern "C" void func_003931EC(StateControl*, s32);
extern "C" __weak void func_0065DF78(StateControl*);

void target(void* pv) {
    u8* p = (u8*)pv;
    u32* r5 = (u32*)(*(u8**)((u8*)data_00706E20 + 0x3dbe8) + 0x10); u8* b = p + 0x800;
    
    if (*r5 != 0) {
        *(u16*)(b + 0xe4) = 0x96;
        goto Lae0;
    }
    {
    Vec3* pp = func_00520FC0(p);
    { Vec3 v; func_00115C70(&v, pp, (Vec3*)(p + 0x3d0)); f32 x = v.x; *(u32*)(p + 0x8d8) = func_004904CC(x, v.z); }
    func_00219548(p, 0.04f);
    if (func_005211BC(p, 1.5f, 0.0f) && data_0070FB60 && !func_00556E64() && data_0070FB60 && func_005401E0()) {
        u8 * p_c21 = p;
        if (*r5 == 0) { *r5 = *(u32*)(p + 0x2cc); do { func_0065DF0C((StateControl*)((u8*)p_c21 + 0x8f0), 4); func_003931EC((StateControl*)((u8*)p + 0x8f0), 4); func_0065DF78((StateControl*)((u8*)p + 0x8f0)); } while (0); return; }
    }
    {
        f32 s5 = *(f32*)(b + 0xc8) + 0.5f;
        if (func_00219630((Act*)p, (Vec3*)(0x3d0 + p), s5)) {
            f32 s5_c20 = s5;
            if (func_00219630((Act*)p, pp, s5_c20)) return;
        }
    }
    }
Lae0:
    do { func_0065DF0C((StateControl*)((u8*)p + 0x8f0), 1); func_003931EC((StateControl*)((u8*)p + 0x8f0), 1); func_0065DF78((StateControl*)((u8*)p + 0x8f0)); } while (0);
}
