typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_25A64C;
struct S1_25A64C;
struct S1_25A64C { void g(); };
struct S0_25A64C { char pad50[0x50]; S1_25A64C* m50; };
void f_25A64C(S0_25A64C* p) { p->m50->g(); }
