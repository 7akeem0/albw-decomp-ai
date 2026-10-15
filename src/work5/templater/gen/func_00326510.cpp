typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_326510;
struct S1_326510;
struct S1_326510 { void g(int); };
struct S0_326510 { char pad4[0x4]; S1_326510* m4; };
void f_326510(S0_326510* p) { p->m4->g(1); }
