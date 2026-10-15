typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2C349C;
struct S1_2C349C;
struct S1_2C349C { void g(); };
struct S0_2C349C { char pad38[0x38]; S1_2C349C* m38; };
void f_2C349C(S0_2C349C* p) { p->m38->g(); }
