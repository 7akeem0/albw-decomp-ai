typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
extern char g[];
extern char dtor[];
extern char dso[];
void* func_0010C4E4(void*);
void reg(void*, void*, void*);
void f() { reg(func_0010C4E4(g), dtor, dso); }
