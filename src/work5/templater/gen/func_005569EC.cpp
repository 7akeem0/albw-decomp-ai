typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5569EC;
struct S1_5569EC;
struct S1_5569EC { char pad33C[0x33C]; char m33C; };
struct S0_5569EC { char pad18[0x18]; S1_5569EC* m18; };
char* f_5569EC(S0_5569EC* p) { return &p->m18->m33C; }
