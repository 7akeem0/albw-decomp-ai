typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern char g_00706D50;
struct M_2C4338 { void g(void*); };
struct S_2C4338 { char pad4[0x4]; M_2C4338 m; };
void f_2C4338(S_2C4338* p) { p->m.g(&g_00706D50); }
