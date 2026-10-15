// 0x112F74: indexed record setter with a zero/nonzero split tail.
typedef unsigned int u32;
typedef unsigned char u8;

void f(u8* self, u8* a1, u32 a2, u32 a3) {
    *(u32*)(self + a3 * 4 + 0x18) = a2;
    *(u32*)(self + a3 * 4 + 0x20) = *(u32*)(a1 + 4);
    *(u8*)(self + a3 + 0x50) = a1[0xc];
    *(u8*)(self + a3 + 0x52) = a1[0xd];
    *(u8*)(self + a3 + 0x54) = a1[0xe];
    if (a3 == 0)
        *(u8*)(self + 0x56) = a1[0xf];
    *(u32*)(self + a3 * 4 + 0x58) = *(u32*)(a1 + 0x14);
    *(u32*)(self + a3 * 4 + 0x28) = *(u32*)(a1 + 0x18);
    if (a3 == 0) {
        *(u8*)(self + 0x34) = a1[0x1c];
        *(u8*)(self + 0x36) = a1[0x1d];
        *(u32*)(self + 0x40) = *(u32*)(a1 + 0x20);
        *(u32*)(self + 0x44) = *(u32*)(a1 + 0x24);
    } else {
        *(u8*)(self + 0x37) = a1[0x1d];
        *(u32*)(self + 0x48) = *(u32*)(a1 + 0x20);
        *(u32*)(self + 0x4c) = *(u32*)(a1 + 0x24);
    }
}
