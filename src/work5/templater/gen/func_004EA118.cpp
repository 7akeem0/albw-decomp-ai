typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4EA118;
struct S1_4EA118;
struct S1_4EA118 { void g(); };
struct S0_4EA118 { char pad38[0x38]; S1_4EA118* m38; };
void f_4EA118(S0_4EA118* p) { p->m38->g(); }
