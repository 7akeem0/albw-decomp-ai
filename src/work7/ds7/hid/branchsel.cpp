typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
struct G { u32 a, b, c; };
extern G gdata;
void func_001049DC();
void func_00104914();
void f() { if (gdata.c) func_001049DC(); else func_00104914(); }
