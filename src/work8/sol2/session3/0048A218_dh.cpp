#pragma O2
#pragma Otime

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

struct Self0048A218 { void* vt; char _4[0xc]; void* m10; void* m14; };
struct Child0048A218 { void** vt; char _4[0x48]; u8 m4c; };
typedef u32 (*VFn0048A218)(Child0048A218* p, Self0048A218* s);

extern char ro_006F4EA8[];
void func_004A1520(Self0048A218* self);

void func_0048A218(Self0048A218* self0) {
    Self0048A218* self = self0;
    Child0048A218* p = (Child0048A218*)self->m14;
    self->vt = ro_006F4EA8;
    if (0 != p && 0 != p->m4c) {
        VFn0048A218 f = (VFn0048A218)p->vt[8];
        if (f(p, self) != 0) {
            VFn0048A218 g = (VFn0048A218)p->vt[12];
            if (g(p, self) != 0) {
                self->m10 = 0;
                self->m14 = 0;
            }
        }
    }
    func_004A1520(self);
}
