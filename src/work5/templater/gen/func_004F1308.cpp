typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_4F1308;
struct S0_4F1308 { char padAC[0xAC]; char mAC; };
char* f_4F1308(S0_4F1308* p) { return &p->mAC; }
