typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct S_398434 { char pad94[0x94]; char m; };
struct T_398434 { void h(void*); };
extern T_398434* g_00709D28;
void f_398434(S_398434* p) { g_00709D28->h(&p->m); }
