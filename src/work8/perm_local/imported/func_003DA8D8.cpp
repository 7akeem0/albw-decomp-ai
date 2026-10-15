

typedef unsigned char u8;
typedef signed char s8;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;
typedef unsigned long long u64;

extern "C" u32 func_003DAB28(char*);

extern "C" u32 func_003DA8D8(char* self, u32 arg) {
    if (0 == arg) return 0xe0e0ebf6u;
    if (*(u8*)(0x18 + self) != 0) return 0xe0e0ebebu;
    *(u32*)(0x1c + self) = arg;
    *(u32*)(self + 0x20) = arg;
do { __schedule_barrier(); } while (0);
    u32 a = arg + 0xb000; __schedule_barrier();
    if (self) { *(int *)(self + 0x24) = a; } else { *(int *)(self + 0x24) = a; }
    u32 b = a + 0x4000;
__schedule_barrier();
    s32 c = a + 0x4800;
    __schedule_barrier();
*(u32*)(self + 0x2c) = c;
    *(u32*)(self + 0x28) = b;
    unsigned int r = func_003DAB28(self);
    if ((s32)(r & 0x80000000u) >= 0) return 0;
    return r;
}
