typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_588F14;
struct S1_588F14;
struct S1_588F14 { char pad1B0[0x1B0]; char m1B0; };
struct S0_588F14 { char pad18[0x18]; S1_588F14* m18; };
char* f_588F14(S0_588F14* p) { return &p->m18->m1B0; }
