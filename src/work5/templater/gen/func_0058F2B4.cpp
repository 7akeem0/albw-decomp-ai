typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_58F2B4;
struct S0_58F2B4 { char padF8[0xF8]; char mF8; };
char* f_58F2B4(S0_58F2B4* p) { return &p->mF8; }
