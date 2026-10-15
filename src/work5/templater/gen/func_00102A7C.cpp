typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct G_102A7C { char pad18[0x18]; u32 m; };
extern G_102A7C g_00714858;
void f_102A7C(u32 a) { g_00714858.m = a; }
