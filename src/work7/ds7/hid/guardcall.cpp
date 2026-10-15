typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
void func_00414490(void*, u32, u32, u32);
void f(char* p, u32 a, u32 b) { void* t = *((void**)(p + 0x30)); if (t) func_00414490(t, 0, a, b); }
