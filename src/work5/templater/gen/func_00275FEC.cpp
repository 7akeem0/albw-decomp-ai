typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_275FEC;
struct S1_275FEC;
struct S1_275FEC { void g(); };
struct S0_275FEC { char pad38[0x38]; S1_275FEC* m38; };
void f_275FEC(S0_275FEC* p) { p->m38->g(); }
