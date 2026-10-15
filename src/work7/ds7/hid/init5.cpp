typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
struct S { u16 a; u16 b; f32 c; u32 d; S(); };
S::S() : a(0), b(0xffff), c(0.0f), d(0) {}
