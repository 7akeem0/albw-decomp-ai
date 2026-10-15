typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
void f(char* p) { for (int i = 0; i < 4; ++i) ((u32*)p)[i] = 0; *(u16*)(p + 0x10) = 0; *(u16*)(p + 0x12) = 0; *(f32*)(p + 0x14) = 0.0f; }
