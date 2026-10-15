typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_489CD8;
struct S1_489CD8;
struct S1_489CD8 { void g(); };
struct S0_489CD8 { char pad50[0x50]; S1_489CD8* m50; };
void f_489CD8(S0_489CD8* p) { p->m50->g(); }
