typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
void f(char* p) { *((u32*)p) = 0xffffffffu; *((u32*)(p + 4)) = 0; }
