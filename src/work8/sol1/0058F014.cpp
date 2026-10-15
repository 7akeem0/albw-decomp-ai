
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

struct Tmp0058F014 { char pad[0x64]; };

void func_0010A464(Tmp0058F014* t);
void func_00533060(void* self, s32 id, Tmp0058F014* t);
void func_0025B66C(Tmp0058F014* t, float f);
void func_0025B84C(Tmp0058F014* t);

static void sound5(void*base,s32 id){    s32 value5=id;if(value5!=-1) {
        Tmp0058F014 t;
        func_0010A464(&t);
        func_00533060(base,value5, &t);
        func_0025B66C(&t, 0.4f);
        func_0025B84C(&t);
    }
}
void func_0058F014(void*self,s32 id){sound5((char*)self-0x3c,id);}
