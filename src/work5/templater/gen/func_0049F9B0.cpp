typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_49F9B0;
struct S1_49F9B0;
struct S2_49F9B0;
struct S3_49F9B0;
struct S3_49F9B0 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void t(int, int); };
struct S2_49F9B0 { char pad20[0x20]; S3_49F9B0* m20; };
struct S1_49F9B0 { char pad20[0x20]; S2_49F9B0* m20; };
struct S0_49F9B0 { char pad5C[0x5C]; S1_49F9B0* m5C; };
void f_49F9B0(S0_49F9B0* p, int a1, int a2) { p->m5C->m20->m20->t(a1, a2); }
