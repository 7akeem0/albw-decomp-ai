typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_57049C;
struct S1_57049C;
struct S1_57049C { void g(); };
struct S0_57049C { char pad34[0x34]; S1_57049C* m34; };
void f_57049C(S0_57049C* p) { p->m34->g(); }
