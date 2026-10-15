

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;
extern u32 data_0070B800;
extern "C" u32 func_0051E57C(u32);
extern "C" void func_0012E85C(u32);
extern "C" u32 func_0051E548(u32);

extern "C" void func_0034B58C(char* self) {
    if (*(u8*)(self + 0x1e9) != 2) return;
    if (*(u8*)(self + 0x1e8) == 0) return;
    s32 current=*(s32*)(self+0x1dc);s32 limit=*(s32*)(self+0x1d4);if(current>limit)return;
    if (func_0051E57C(data_0070B800) != 0) {
        func_0012E85C(data_0070B800);
        *(u32*)(self + 0x1d4) = *(u32*)(self + 0x1dc) - 1;
    }
    if (func_0051E548(data_0070B800) == 0) {
        *(u32*)(self + 0x1d4) = *(u32*)(self + 0x1dc) - 1;
    }
}
