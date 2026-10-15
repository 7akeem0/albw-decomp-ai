typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_58F2AC;
struct S0_58F2AC { char pad18C[0x18C]; char m18C; };
char* f_58F2AC(S0_58F2AC* p) { return &p->m18C; }
