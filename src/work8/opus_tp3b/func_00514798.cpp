
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

struct Ctx2540A4 {
    char _0[4];
    Vec3 m4;
    char _10[0x10];
    u16 m20;
    char _22[6];
    u32 m28;            
};

struct Obj2540A4 {
    char _0[0x3d0];
    Vec3 m3d0;          
    char _3dc[0x524 - 0x3dc];
    Vec3 m490;          
    Vec3 m49c;          
    Vec3 m4a8;          
};

extern char* data_00706E20;
extern s32 ro_00693060;
extern s32 ro_00693064;
extern s32 ro_00693074;
extern s32 ro_006934A4;
extern s32 ro_006934A8;

struct Actor;
Actor* func_0052FBA0(void* mgr, u32 handle);
s32 func_00588BE4(Actor* a);
void func_00520F54(Actor* a, Vec3* p, Vec3* q);
void func_00115C54(Vec3* out, const Vec3* a, const Vec3* b);
void func_001507A8(Obj2540A4* self, Ctx2540A4* c);

bool func_002540A4(Obj2540A4* self, Ctx2540A4* c) {
    Actor* act = func_0052FBA0(data_00706E20 + 0x3d800 + 0x3bc, c->m28);
    u32 t = (c->m20 & 0x7e0) >> 5;
    if (t == 0x13 || t == 0x14 || t == 0x12) return false;
    if (act != 0) {
        if (func_00588BE4(act) == ro_00693060 || func_00588BE4(act) == ro_00693064 ||
            func_00588BE4(act) == ro_00693074 || func_00588BE4(act) == ro_006934A4 ||
            func_00588BE4(act) == ro_006934A8) {
            Actor* a=act; Vec3* q=&self->m3d0; Vec3* p=&self->m49c;
            func_00520F54(a,p,q);
        }
    }
    Vec3* dest=&self->m490;
    func_00115C54(dest, dest, &c->m4);
    self->m4a8.set(c->m4);
    func_001507A8(self, c);
    return true;
}
