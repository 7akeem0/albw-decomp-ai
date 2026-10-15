typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_556A80;
struct S1_556A80;
struct S1_556A80 { char pad4E4[0x4E4]; char m4E4; };
struct S0_556A80 { char pad18[0x18]; S1_556A80* m18; };
char* f_556A80(S0_556A80* p) { return &p->m18->m4E4; }
