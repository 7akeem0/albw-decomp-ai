typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_539000;
struct S1_539000;
struct S1_539000 { void g(int, int); };
struct S0_539000 { char pad50[0x50]; S1_539000* m50; };
void f_539000(S0_539000* p, int a1) { p->m50->g(a1, 1); }
