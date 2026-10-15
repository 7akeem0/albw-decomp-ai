typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_416F9C;
struct S0_416F9C { char pad18[0x18]; f32 m18; };
void f_416F9C(S0_416F9C* p, f32 v) { p->m18 = v; }
