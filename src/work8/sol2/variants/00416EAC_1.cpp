
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

struct Obj00416EAC { char _0[0x68]; };

void func_00415EB4(Obj00416EAC* self);
void func_0041D7FC(void* a, void* b, u32 n);
void func_00100950(void* p, void* fn, u32 n, u32 m);
void func_004137D0();
void* func_004137D4(void* p);

void init(void*const&a,void*const&b,const u32&n){func_0041D7FC(a,b,n);}
void* func_00416EAC(Obj00416EAC* self) {
    func_00415EB4(self);
    init((char*)self+0x94,(char*)self+0x98,0xa00);
    func_00100950((char*)self + 0x98, (void*)func_004137D0, 0x50, 0x20);
    return (char*)func_004137D4((char*)self + 0x68) - 0x68;
}
