// 0x144A50: two-branch state update.
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

extern void* data_0070FB60;
extern u8    bss_0078EC04[];
extern "C" u32 func_002903E0(void*, void*);
extern "C" void func_001E6A6C(void*, void*);

struct Cmd {
    u8  a;      // +0
    u8  pad[3];
    u32 b;      // +4
    u16 c;      // +8
    u8  d;      // +0xa
};

void f(void* self) {
    if (*(u8*)((u8*)self + 0x7ca) != 0) {
        Cmd c;
        c.a = 5;
        c.c = 0;
        c.b = 9;
        c.d = 1;
        if (func_002903E0(data_0070FB60, &c))
            *(u8*)((u8*)self + 0x7ca) = 0;
    } else {
        if (*(u8*)((u8*)self + 0x476) == 0)
            return;
        u8 k = *(u8*)((u8*)self + 0x7c9);
        func_001E6A6C(self, bss_0078EC04 + (u32)k * 8);
        *(u8*)((u8*)self + 0x476) = 0;
    }
}
