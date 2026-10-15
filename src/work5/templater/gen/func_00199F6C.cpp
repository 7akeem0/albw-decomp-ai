typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_199F6C;
struct S1_199F6C;
struct S1_199F6C { char pad6C[0x6C]; char m6C; };
struct S0_199F6C { char pad14[0x14]; S1_199F6C* m14; };
char* f_199F6C(S0_199F6C* p) { return &p->m14->m6C; }
