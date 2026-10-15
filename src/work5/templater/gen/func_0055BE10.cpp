typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_55BE10;
struct S0_55BE10 { char pad40C[0x40C]; char m40C; };
char* f_55BE10(S0_55BE10* p) { return &p->m40C; }
