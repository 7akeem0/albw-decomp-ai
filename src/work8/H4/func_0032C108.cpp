typedef unsigned char u8; typedef signed char s8; typedef unsigned short u16; typedef short s16;
typedef unsigned int u32; typedef int s32;

void func_0032C7F8(u8* p);
void func_0036E490(u8* p, u32 z, u32 v);

void func_0032C108(u8* self, u32 mode) {
    if (mode != 6) {
        func_0032C7F8(self + 0x8c4);
        func_0032C7F8(self + 0x99c);
    } else {
        self[0xc93] = 1;
        *(u32*)(self + 0xc3c) = 0;
        self[0xc92] = 0;
        func_0036E490(self + 0x8f8, 0, *(u32*)(self + 0x8c4));
        func_0036E490(self + 0x9d0, 0, *(u32*)(self + 0x99c));
    }
}
