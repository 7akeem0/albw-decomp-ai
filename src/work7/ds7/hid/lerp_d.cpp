typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
void f(s32* p, s32 a, s32 n) { n = n <= 1 ? 1 : n; f32 inv = 1.0f / (f32)n; s32 v = *p; *p = v + (s32)((f32)(a - v) * inv); }
