typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_31C72C { char padF4[0xF4]; char m; };
struct T_31C72C { void h(void*); };
extern T_31C72C* g_0070B728;
void f_31C72C(S_31C72C* p) { g_0070B728->h(&p->m); }
