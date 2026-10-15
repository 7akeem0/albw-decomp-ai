typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_297574;
struct S1_297574;
struct S1_297574 { void g(); };
struct S0_297574 { char pad38[0x38]; S1_297574* m38; };
void f_297574(S0_297574* p) { p->m38->g(); }
