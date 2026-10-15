typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_49A018;
struct M_49A018;
struct M_49A018 { void g(); };
struct S0_49A018 { char pad250[0x250]; M_49A018 m250; };
void f_49A018(S0_49A018* p) { p->m250.g(); }
