typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_41DED4;
struct S0_41DED4 { char pad120[0x120]; char m120; };
char* f_41DED4(S0_41DED4* p) { return &p->m120; }
