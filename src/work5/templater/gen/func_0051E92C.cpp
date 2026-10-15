typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_51E92C;
struct S1_51E92C;
struct S1_51E92C { char pad120[0x120]; char m120; };
struct S0_51E92C { char pad28D0[0x28D0]; S1_51E92C* m28D0; };
char* f_51E92C(S0_51E92C* p) { return &p->m28D0->m120; }
