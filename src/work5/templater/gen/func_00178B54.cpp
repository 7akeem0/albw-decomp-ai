typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_178B54;
struct S1_178B54;
struct S1_178B54 { void g(); };
struct S0_178B54 { S1_178B54* m0; };
void f_178B54(S0_178B54* p) { p->m0->g(); }
