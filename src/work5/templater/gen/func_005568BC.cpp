typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_5568BC;
struct S1_5568BC;
struct S1_5568BC { char pad68[0x68]; char m68; };
struct S0_5568BC { char pad18[0x18]; S1_5568BC* m18; };
char* f_5568BC(S0_5568BC* p) { return &p->m18->m68; }
