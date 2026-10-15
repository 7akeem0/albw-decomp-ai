typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_57D21C;
struct S1_57D21C;
struct S1_57D21C { void g(); };
struct S0_57D21C { char pad50[0x50]; S1_57D21C* m50; };
void f_57D21C(S0_57D21C* p) { p->m50->g(); }
