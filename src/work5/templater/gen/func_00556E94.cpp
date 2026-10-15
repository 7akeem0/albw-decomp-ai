typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556E94;
struct S1_556E94;
struct S1_556E94 { char pad368[0x368]; char m368; };
struct S0_556E94 { char pad10[0x10]; S1_556E94* m10; };
char* f_556E94(S0_556E94* p) { return &p->m10->m368; }
