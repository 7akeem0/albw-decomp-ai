typedef unsigned int u32;
typedef int s32;
typedef long long s64;
typedef float f32;
typedef signed char s8;
typedef short s16;
typedef unsigned char u8;
typedef unsigned short u16;
struct Heap;
void* operator new[](unsigned, Heap*, int);
extern Heap* g_heap;
void* f(unsigned n) { return ::operator new[](n, g_heap, 4); }
