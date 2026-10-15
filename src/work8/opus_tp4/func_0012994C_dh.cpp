

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;

struct Vec3 { float x, y, z; };
extern Vec3 sead_zero;
extern "C" Vec3* func_00520FC0(void*);
extern "C" void func_00115C70(Vec3*, const Vec3&, const Vec3&);
extern "C" s32 func_004904CC(f32, f32);
extern "C" bool func_0012A4C4(void*, u32);
extern "C" void func_00129EE4(void*);
extern "C" void func_004FC07C(void*, u32, u32, u32);

static inline void copy38(Vec3* d,const Vec3& s){*d=s;}
inline s32 angTo(char* self){
    Vec3 tmp;Vec3* tp=&tmp;copy38(tp,sead_zero);
    Vec3* p = func_00520FC0(self);
    func_00115C70(tp, *p, *(Vec3*)(self + 0x3d0));
    return func_004904CC(tmp.x, tmp.z);}
extern "C" void func_0012994C(char* self) {
    *(s32*)(self + 0x930) = angTo(self);
    if (func_0012A4C4(self, 1)) func_00129EE4(self);
}
