typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4FC168;
struct S1_4FC168;
struct S1_4FC168 { char pad164[0x164]; f32 m164; };
struct S0_4FC168 { char pad510[0x510]; S1_4FC168* m510; };
void f_4FC168(S0_4FC168* p, f32 v) { p->m510->m164 = v; }
