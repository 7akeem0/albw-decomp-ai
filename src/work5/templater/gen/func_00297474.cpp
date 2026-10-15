typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_297474;
struct S1_297474;
struct S1_297474 { void g(); };
struct S0_297474 { char pad38[0x38]; S1_297474* m38; };
void f_297474(S0_297474* p) { p->m38->g(); }
