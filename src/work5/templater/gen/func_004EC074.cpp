typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4EC074;
struct S1_4EC074;
struct S1_4EC074 { void g(); };
struct S0_4EC074 { char pad34[0x34]; S1_4EC074* m34; };
void f_4EC074(S0_4EC074* p) { p->m34->g(); }
