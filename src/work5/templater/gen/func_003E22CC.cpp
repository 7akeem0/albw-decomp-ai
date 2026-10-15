typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3E22CC;
struct M_3E22CC;
struct M_3E22CC { void g(); };
struct S0_3E22CC { char pad270[0x270]; M_3E22CC m270; };
void f_3E22CC(S0_3E22CC* p) { p->m270.g(); }
