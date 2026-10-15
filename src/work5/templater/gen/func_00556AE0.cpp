typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556AE0;
struct S1_556AE0;
struct S1_556AE0 { char pad506[0x506]; u8 m506; };
struct S0_556AE0 { char pad10[0x10]; S1_556AE0* m10; };
u8 f_556AE0(S0_556AE0* p) { return p->m10->m506; }
