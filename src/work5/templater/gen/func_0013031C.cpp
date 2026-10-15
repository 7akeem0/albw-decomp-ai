typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_13031C;
struct S1_13031C;
struct S1_13031C { char pad7F8[0x7F8]; char m7F8; };
struct S0_13031C { char pad28D0[0x28D0]; S1_13031C* m28D0; };
char* f_13031C(S0_13031C* p) { return &p->m28D0->m7F8; }
