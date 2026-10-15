typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_53ECEC;
struct S1_53ECEC;
struct S1_53ECEC { char pad80[0x80]; char m80; };
struct S0_53ECEC { char pad10[0x10]; S1_53ECEC* m10; };
char* f_53ECEC(S0_53ECEC* p) { return &p->m10->m80; }
