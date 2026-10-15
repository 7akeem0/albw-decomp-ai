typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_297448;
struct S1_297448;
struct S1_297448 { void g(); };
struct S0_297448 { char pad38[0x38]; S1_297448* m38; };
void f_297448(S0_297448* p) { p->m38->g(); }
