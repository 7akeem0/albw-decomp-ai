typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_58F300;
struct S0_58F300 { char padEC[0xEC]; char mEC; };
char* f_58F300(S0_58F300* p) { return &p->mEC; }
