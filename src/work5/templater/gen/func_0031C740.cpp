typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_31C740 { char padF4[0xF4]; char m; };
struct T_31C740 { void h(void*); };
extern T_31C740* g_0070B728;
void f_31C740(S_31C740* p) { g_0070B728->h(&p->m); }
