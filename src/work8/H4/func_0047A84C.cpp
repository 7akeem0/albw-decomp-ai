typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

void func_0044F498(void* a, u32 k, u32* buf);

void func_0047A84C(u8* self) {
    u8* a = *(u8**)(self + 0x214);
    if (a != 0 && a[0x98] != 6) {
        u8* p = *(u8**)(self + 0x208);
        u8* x = *(u8**)(p + 0x1c);
        u8* y = *(u8**)x;
        u8* q = *(u8**)(y + 0x10);
        u32 buf[2];
        buf[0] = *(u32*)(q + 0x54);
        buf[1] = *(u32*)(q + 0x64);
        func_0044F498(*(void**)(self + 0x214), 7, buf);
    }
    u8* b = *(u8**)(self + 0x210);
    if (b != 0) {
        b[0x98] = 9;
    }
    u8* c = *(u8**)(self + 0x218);
    if (c != 0) {
        c[0x80] = 4;
    }
}
