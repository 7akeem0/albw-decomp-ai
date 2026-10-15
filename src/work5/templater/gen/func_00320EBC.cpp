typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_320EBC;
struct S1_320EBC;
struct S1_320EBC { void g(); };
struct S0_320EBC { S1_320EBC* m0; };
void f_320EBC(S0_320EBC* p) { p->m0->g(); }
