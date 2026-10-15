typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_152218;
struct S1_152218;
struct S1_152218 { void g(); };
struct S0_152218 { char pad514[0x514]; S1_152218* m514; };
void f_152218(S0_152218* p) { p->m514->g(); }
