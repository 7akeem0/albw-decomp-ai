typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
s32 f(f32* a, f32* b) { f32 d = a[1] - b[1]; if (d == 0) return 0; return d < 0 ? -1 : 1; }
