typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_399310 { char pad98[0x98]; char m; };
struct T_399310 { void h(void*); };
extern T_399310* g_00709D28;
void f_399310(S_399310* p) { g_00709D28->h(&p->m); }
