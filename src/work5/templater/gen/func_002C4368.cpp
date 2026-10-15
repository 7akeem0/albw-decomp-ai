typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern char g_00706D68;
struct M_2C4368 { void g(void*); };
struct S_2C4368 { char pad4[0x4]; M_2C4368 m; };
void f_2C4368(S_2C4368* p) { p->m.g(&g_00706D68); }
