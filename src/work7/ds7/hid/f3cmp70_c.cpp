typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
s32 f(char* a, char* b) { if (*(f32*)(a + 0x70) < *(f32*)(b + 0x70)) return -1; return *(f32*)(a + 0x70) != *(f32*)(b + 0x70) ? 1 : 0; }
