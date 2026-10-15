typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_546488;
struct S1_546488;
struct S1_546488 { char pad74[0x74]; char m74; };
struct S0_546488 { char pad4[0x4]; S1_546488* m4; };
char* f_546488(S0_546488* p) { return &p->m4->m74; }
