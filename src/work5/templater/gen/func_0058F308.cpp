typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_58F308;
struct S0_58F308 { char pad110[0x110]; char m110; };
char* f_58F308(S0_58F308* p) { return &p->m110; }
