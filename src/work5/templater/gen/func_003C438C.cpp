typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_3C438C;
struct S0_3C438C { char pad6C[0x6C]; char m6C; };
char* f_3C438C(S0_3C438C* p) { return &p->m6C; }
