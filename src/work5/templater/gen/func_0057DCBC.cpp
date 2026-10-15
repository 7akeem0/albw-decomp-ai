typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_57DCBC;
struct S0_57DCBC { char pad11[0x11]; u8 m11; };
u8 f_57DCBC(S0_57DCBC* p) { return p->m11; }
