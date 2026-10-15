typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
void f(char* p) {
  *((void**)(p + 4)) = p + 4;
  *((u32*)p) = 0;
  *((void**)(p + 8)) = p + 4;
}
