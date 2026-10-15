typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5568B0;
struct S1_5568B0;
struct S1_5568B0 { char pad598[0x598]; u8 m598; };
struct S0_5568B0 { char pad10[0x10]; S1_5568B0* m10; };
u8 f_5568B0(S0_5568B0* p) { return p->m10->m598; }
