typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_199F78;
struct S1_199F78;
struct S1_199F78 { char pad78[0x78]; char m78; };
struct S0_199F78 { char pad14[0x14]; S1_199F78* m14; };
char* f_199F78(S0_199F78* p) { return &p->m14->m78; }
