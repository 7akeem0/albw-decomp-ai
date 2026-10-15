

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
extern "C" s32 func_0068C690(const Vec3&);
extern "C" void func_004FC07C(void*, u32, u32, u32);

static inline void copy38(Vec3* d,const Vec3& s){*d=s;}
extern "C" void func_00380544(char* self) {
    Vec3 tmp;Vec3* tp=&tmp;copy38(tp,sead_zero);
    Vec3* p = func_00520FC0(self);
    func_00115C70(tp, *p, *(Vec3*)(self + 0x3d0));
    *(s32*)(self + 0xad8) = func_0068C690(tmp);
    func_004FC07C(self, 0, 0xffffffffu, 0);
}
