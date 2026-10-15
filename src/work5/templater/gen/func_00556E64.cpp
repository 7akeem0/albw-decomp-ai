typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;
struct T1_556E64 { char pad4[0x4]; u32 m; };
struct T0_556E64 { char pad28[0x28]; T1_556E64* q; };
bool f_556E64(T0_556E64* p) { return p->q->m != 1065353216; }
