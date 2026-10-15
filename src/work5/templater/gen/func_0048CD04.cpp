typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_48CD04;
struct S1_48CD04;
struct S1_48CD04 { void g(); };
struct S0_48CD04 { char pad30[0x30]; S1_48CD04* m30; };
void f_48CD04(S0_48CD04* p) { p->m30->g(); }
