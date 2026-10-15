typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556AEC;
struct S1_556AEC;
struct S1_556AEC { char pad507[0x507]; u8 m507; };
struct S0_556AEC { char pad10[0x10]; S1_556AEC* m10; };
u8 f_556AEC(S0_556AEC* p) { return p->m10->m507; }
