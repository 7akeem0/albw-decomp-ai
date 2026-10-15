

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern "C" int func_003CF0F4(void*, u32, u32, u32, u32);
extern "C" int func_003D1E48(void*, u32, u32);

extern "C" int func_003CF1AC(void* a0, char* a1, u32 a2, u32 a3, u32 st0, u32 st1) {
    int r = func_003CF0F4(a0, a2, a3, st0, st1);
    s32 m = (s32)((u32)r & 0x80000000u);
    if (m < 0) return r;
    return func_003D1E48(a1,a2,a3);
}
