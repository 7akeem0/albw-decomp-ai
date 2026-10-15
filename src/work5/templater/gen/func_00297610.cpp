typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_297610;
struct M_297610;
struct M_297610 { void g(); };
struct S0_297610 { char pad74[0x74]; M_297610 m74; };
void f_297610(S0_297610* p) { p->m74.g(); }
