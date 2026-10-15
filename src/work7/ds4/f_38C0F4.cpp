typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed char s8;

extern "C" int func_0038C0F4(char* a, char* b) {
    if (*(u16*)(*(char**)(a + 0x2c) + 0x42) != 0x9d) return 1;
    char* c = *(char**)(b + 0x34);
    if (c == 0) return 1;
    if ((*(u16*)(c + 0x2a) & 0xff) == 0) return 1;
    if ((*(u32*)(b + 0x24) & 0x200000) == 0) return 1;
    s8 t = *(s8*)(0x143 + a);
    *(u8*)(a + 0x143) = 0;
    if (t == 0) return 0;
    return 1;
}
