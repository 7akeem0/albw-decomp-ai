typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
u32 f(char* a, char* b) { return *(unsigned char*)(b + 0xf) - *(unsigned char*)(a + 0xf); }
