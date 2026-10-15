typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_297674;
struct S1_297674;
struct S1_297674 { void g(); };
struct S0_297674 { char pad38[0x38]; S1_297674* m38; };
void f_297674(S0_297674* p) { p->m38->g(); }
