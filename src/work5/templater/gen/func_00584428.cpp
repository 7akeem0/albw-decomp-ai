typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_584428;
struct S1_584428;
struct S1_584428 { char pad8E4[0x8E4]; char m8E4; };
struct S0_584428 { char pad518[0x518]; S1_584428* m518; };
char* f_584428(S0_584428* p) { return &p->m518->m8E4; }
