typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
void f(char* p) { *(u32*)p = 0; *(u32*)(p + 4) = 0; *(u32*)(p + 8) = 0; *(u32*)(p + 0xc) = 0xffffffffu; *(u8*)(p + 0x10) = 0; }
