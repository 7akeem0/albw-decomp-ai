typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_25B8FC;
struct S1_25B8FC;
struct S1_25B8FC { void g(); };
struct S0_25B8FC { char pad40[0x40]; S1_25B8FC* m40; };
void f_25B8FC(S0_25B8FC* p) { p->m40->g(); }
