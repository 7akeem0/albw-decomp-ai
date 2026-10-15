typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
extern u32 data_00725974;
struct S0_53AD64;
struct S1_53AD64;
struct S1_53AD64 { char pad24[0x24]; u32 m24; };
struct S0_53AD64 { char pad4C[0x4C]; S1_53AD64* m4C; };
void* f_0053AD64(S0_53AD64* p){return p->m4C?&p->m4C->m24:&data_00725974;}
