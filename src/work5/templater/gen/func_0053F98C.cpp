typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_53F98C;
struct S1_53F98C;
struct S1_53F98C { char pad4[0x4]; s16 m4; };
struct S0_53F98C { char pad48[0x48]; S1_53F98C* m48; };
s16 f_53F98C(S0_53F98C* p) { return p->m48->m4; }
