typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_588F08;
struct S1_588F08;
struct S1_588F08 { char pad1BC[0x1BC]; char m1BC; };
struct S0_588F08 { char pad18[0x18]; S1_588F08* m18; };
char* f_588F08(S0_588F08* p) { return &p->m18->m1BC; }
