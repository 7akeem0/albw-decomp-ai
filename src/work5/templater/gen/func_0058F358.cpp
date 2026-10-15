typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_58F358;
struct S0_58F358 { char pad160[0x160]; char m160; };
char* f_58F358(S0_58F358* p) { return &p->m160; }
