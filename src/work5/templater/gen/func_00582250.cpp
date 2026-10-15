typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_582250;
struct S1_582250;
struct S1_582250 { char pad15B4C[0x15B4C]; char m15B4C; };
struct S0_582250 { char pad38[0x38]; S1_582250* m38; };
char* f_582250(S0_582250* p) { return &p->m38->m15B4C; }
