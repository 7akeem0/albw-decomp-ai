typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5883E8;
struct S1_5883E8;
struct S1_5883E8 { char pad148[0x148]; s8 m148; };
struct S0_5883E8 { char pad24[0x24]; S1_5883E8* m24; };
s8 f_5883E8(S0_5883E8* p) { return p->m24->m148; }
