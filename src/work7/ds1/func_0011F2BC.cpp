typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned short u16;
typedef signed int s32;

extern "C" int func_0011F1E8(void*, u32, int);

s32 func_0011F2BC(u8* self, u32 key) {
    u16 i = 0;
    u16 n = *(u16*)(self + 0xa);
    if (n == 0) return -1;
    for (; *(u16*)(self + 0xa) > i; i++) {
        u8* e = *(u8**)(self + 0xc) + 4 + i * 16;
        if (func_0011F1E8(e, key, 4) != 0) return i;
    }
    return -1;
}
