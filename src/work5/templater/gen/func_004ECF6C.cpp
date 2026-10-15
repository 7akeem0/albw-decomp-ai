typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_4ECF6C { char pad2E4[0x2E4]; char m; };
struct T_4ECF6C { void h(void*); };
extern T_4ECF6C* g_0070B728;
void f_4ECF6C(S_4ECF6C* p) { g_0070B728->h(&p->m); }
