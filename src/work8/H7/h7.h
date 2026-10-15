// H7 shared declarations (draft worker H7)
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

sead::Random* func_0058A7D4(Actor* a);          // getRandom(Actor*)
s32 func_0068C690(const Vec3* v);               // s32 angleFromVec(const Vec3&)
void func_00115C70(Vec3* o, const Vec3* a, const Vec3* b); // Vec3::setSub (this=out)
void func_0065650C(void* p, s32 n);
struct G70FB60 { char _0[0x1c]; Vec3* m1C; };
extern G70FB60* data_0070FB60;
