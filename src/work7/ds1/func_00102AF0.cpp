typedef unsigned char u8;
typedef unsigned int u32;

extern "C" void func_001057F4(void*, int);
extern "C" void func_00104AA0();
extern "C" u8 data_00714888[];

void func_00102AF0() {
    func_001057F4((void*)func_00104AA0, 0);
    u8* a = data_00714888;
    u32 z = 0;
    *(u32*)(a + 0xc) = z;  *(u32*)(a + 0x4c) = z;
    *(u32*)(a + 0x10) = z; *(u32*)(a + 0x50) = z;
    *(u32*)(a + 0x14) = z; *(u32*)(a + 0x54) = z;
    *(u32*)(a + 0x18) = z; *(u32*)(a + 0x58) = z;
    *(u32*)(a + 0x1c) = z; *(u32*)(a + 0x5c) = z;
    *(u32*)(a + 0x20) = z; *(u32*)(a + 0x60) = z;
    *(u32*)(a + 0x24) = z; *(u32*)(a + 0x64) = z;
    *(u32*)(a + 0x28) = z; *(u32*)(a + 0x68) = z;
    *(u32*)(a + 0x2c) = z; *(u32*)(a + 0x6c) = z;
    *(u32*)(a + 0x30) = z; *(u32*)(a + 0x70) = z;
    *(u32*)(a + 0x34) = z; *(u32*)(a + 0x74) = z;
    *(u32*)(a + 0x38) = z; *(u32*)(a + 0x78) = z;
    *(u32*)(a + 0x3c) = z; *(u32*)(a + 0x7c) = z;
    *(u32*)(a + 0x48) = 0;
    *(u32*)(a + 0x88) = 0;
}
