typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct M_445774 { void h(); };
struct S_445774 { char pad74[0x74]; M_445774 m; void g(); };
void f_445774(S_445774* p) { p->g(); p->m.h(); }
