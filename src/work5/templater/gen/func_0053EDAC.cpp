typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_53EDAC;
struct S1_53EDAC;
struct S2_53EDAC;
struct S2_53EDAC { char pad14[0x14]; f32 m14; };
struct S1_53EDAC { char pad14[0x14]; S2_53EDAC* m14; };
struct S0_53EDAC { char pad10[0x10]; S1_53EDAC* m10; };
f32 f_53EDAC(S0_53EDAC* p) { return p->m10->m14->m14; }
