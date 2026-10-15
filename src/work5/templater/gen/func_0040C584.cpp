typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_40C584;
struct S1_40C584;
struct S1_40C584 { void g(); };
struct S0_40C584 { char pad114[0x114]; S1_40C584* m114; };
void f_40C584(S0_40C584* p) { p->m114->g(); }
