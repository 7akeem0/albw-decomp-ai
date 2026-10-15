typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
struct V3 { f32 x, y, z; };
extern const V3 sead_zero;
struct S { f32 a; V3 v; S(); };
S::S() : a(0.5f), v(sead_zero) {}
