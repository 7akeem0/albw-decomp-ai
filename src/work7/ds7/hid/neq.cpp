typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
bool f(char* a, char* b) { return *((u32*)(a + 0xc)) != *((u32*)(b + 4)); }
