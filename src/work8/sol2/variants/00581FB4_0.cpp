
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

struct Mgr00581FB4 { char _0[0x18]; s8 m18; };
struct Sub00581FB4 { char _0[4]; s16 m4; s16 m6; };
struct Self00581FB4 { char _0[0x40]; Sub00581FB4* m40; };
extern Mgr00581FB4* data_00709DF8;

static inline s32 abs00581FB4(s32 v) { return (v ^ (v >> 31)) - (v >> 31); }

s32 func_00581FB4(Self00581FB4* self) {
    s32 k = (s32)data_00709DF8->m18 - 9;
    if ((u32)k > 12) goto fallback;
    Sub00581FB4* p = self->m40;
    s32 a = p->m6;
    s32 b = p->m4;
    s32 prod = a * b;
    if (prod == 0) goto fallback;
    if (prod < 0) return a + abs00581FB4(b);
    if (a <= 0) return abs00581FB4(b);
    return a;
fallback:return 1;
}
