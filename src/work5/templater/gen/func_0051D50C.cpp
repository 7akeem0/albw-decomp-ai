typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_51D50C;
struct S1_51D50C;
struct S1_51D50C { void g(); };
struct S0_51D50C { char pad18[0x18]; S1_51D50C* m18; };
void f_51D50C(S0_51D50C* p) { p->m18->g(); }
