typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_450178;
struct S1_450178;
struct S1_450178 { void g(); };
struct S0_450178 { char pad28[0x28]; S1_450178* m28; };
void f_450178(S0_450178* p) { p->m28->g(); }
