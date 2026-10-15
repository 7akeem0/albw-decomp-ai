typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
s32 f(f32* a, f32* b) { f32 x = a[1], y = b[1]; return x > y ? 1 : (x < y ? -1 : 0); }
