typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern char g_00759C60;
struct M_50A4F0 { void g(void*); };
struct S_50A4F0 { char pad3D0[0x3D0]; M_50A4F0 m; };
void f_50A4F0(S_50A4F0* p) { p->m.g(&g_00759C60); }
