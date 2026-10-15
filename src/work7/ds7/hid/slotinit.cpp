typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
extern void* slot;
void f(char* p) { if (!*(void**)&slot) { *(void**)&slot = p; *((u8*)(p + 0xbc)) = 1; } }
