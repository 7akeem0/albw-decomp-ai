

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern "C" u32 func_004F9434(u32);

extern "C" float func_00354558(char* self, char* a1) {
    u32 x;if(*(u8*)(self+0x4b5)==0)x=*(u32*)(self+0x430);else x=*(u32*)(self+0x434);
    if (func_004F9434(x) == 7) return 0.0f;
    u32 a = *(u32*)(self + 0xa34);
    u32 b = *(u32*)(self + 0xa38);
    if (b > a) {
        if (*(u8*)(a1 + 0x21) == 1) return 0.0f;
    }
    u32 c = *(u32*)(self + 0xa28);
    u32 d = *(u32*)(self + 0xa2c);
    if (d > c) return 1.0f;
    return 0.0f;
}
