typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_452308;
struct M_452308;
struct M_452308 { void g(); };
struct S0_452308 { char pad98[0x98]; M_452308 m98; };
void f_452308(S0_452308* p) { p->m98.g(); }
