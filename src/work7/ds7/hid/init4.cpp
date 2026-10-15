typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
struct S { f32 a, b; u32 c, d; S(); };
S::S() : a(0.0f), b(0.0f), c(0), d(0) {}
