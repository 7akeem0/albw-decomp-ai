typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_58F28C;
struct S0_58F28C { char pad1C0[0x1C0]; char m1C0; };
char* f_58F28C(S0_58F28C* p) { return &p->m1C0; }
