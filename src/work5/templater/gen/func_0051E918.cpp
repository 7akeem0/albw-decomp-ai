typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_51E918;
struct S1_51E918;
struct S1_51E918 { char pad150[0x150]; char m150; };
struct S0_51E918 { char pad28D0[0x28D0]; S1_51E918* m28D0; };
char* f_51E918(S0_51E918* p) { return &p->m28D0->m150; }
