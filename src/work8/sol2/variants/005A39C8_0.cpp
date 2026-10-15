
#pragma once
typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef signed short s16;
typedef unsigned int u32;
typedef signed int s32;
typedef unsigned long long u64;

struct Vec3 { float x, y, z; void set(const Vec3& o) { x = o.x; y = o.y; z = o.z; } };
namespace sead { struct Random { u32 getU32(); }; }
struct Actor;

sead::Random* func_0058A7D4(Actor* a);          
s32 func_0068C690(const Vec3* v);               
void func_00115C70(Vec3* o, const Vec3* a, const Vec3* b); 
void func_0065650C(void* p, s32 n);
struct G70FB60 { char _0[0x1c]; Vec3* m1C; };
extern G70FB60* data_0070FB60;

struct G005A39C8 { u32 m0; u8 m4; u8 m5; };
extern G005A39C8 data_00716124;
extern u32 ro_006B4958;

s32 func_00115F10(u32* p, u32 v);
void func_0010A98C(s32);
void func_00100000();
void func_003CDC00();
u32 func_005902C0(G005A39C8* self, void* a, void* b);

void func_005A39C8() {
    G005A39C8* g = &data_00716124;
    g->m0 = 0;
    {
        u32 local = 0;
        s32 r = func_00115F10(&local, ro_006B4958);
        u32 sg = (u32)r >> 31;
        if (sg) func_0010A98C(r);
        g->m0 = local;
    }
    g->m4 = 0;
    g->m5 = 0;
    func_005902C0(g, (void*)func_003CDC00, (void*)func_00100000);
}
