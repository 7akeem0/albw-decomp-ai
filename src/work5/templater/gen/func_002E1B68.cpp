typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_2E1B68;
struct M_2E1B68;
struct M_2E1B68 { void g(); };
struct S0_2E1B68 { char padAC[0xAC]; M_2E1B68 mAC; };
void f_2E1B68(S0_2E1B68* p) { p->mAC.g(); }
