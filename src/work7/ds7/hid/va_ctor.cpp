typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
struct T { u32 w; T(); };
T::T() : w(0) {}
struct S { T arr[6]; S(); };
S::S() {}
