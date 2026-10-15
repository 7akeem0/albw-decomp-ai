typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32; typedef float f32;

struct S0_416FA4;
struct S0_416FA4 { char pad83[0x83]; u8 m83; };
void f_416FA4(S0_416FA4* p, u8 v) { p->m83 = v; }
