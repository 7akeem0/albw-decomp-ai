typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_58F360;
struct S0_58F360 { char pad16C[0x16C]; char m16C; };
char* f_58F360(S0_58F360* p) { return &p->m16C; }
