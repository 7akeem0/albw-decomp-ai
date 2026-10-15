typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2760A4;
struct S1_2760A4;
struct S1_2760A4 { void g(); };
struct S0_2760A4 { char pad38[0x38]; S1_2760A4* m38; };
void f_2760A4(S0_2760A4* p) { p->m38->g(); }
