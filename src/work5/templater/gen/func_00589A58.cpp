typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_589A58;
struct S1_589A58;
struct S1_589A58 { char pad4[0x4]; char m4; };
struct S0_589A58 { char pad10[0x10]; S1_589A58* m10; };
char* f_589A58(S0_589A58* p) { return &p->m10->m4; }
