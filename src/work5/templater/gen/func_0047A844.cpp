typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_47A844;
struct S1_47A844;
struct S1_47A844 { void g(); };
struct S0_47A844 { char pad158[0x158]; S1_47A844* m158; };
void f_47A844(S0_47A844* p) { p->m158->g(); }
