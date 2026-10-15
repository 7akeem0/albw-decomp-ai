typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned short u16;

extern "C" void __attribute__((weak)) func_0010CF7C(void*);

void func_00109DE4(u8* a0) {
    *(u32*)(a0 + 0x38) = 0;
    *(u32*)(a0 + 0x3c) = 0;
    *(u32*)(a0 + 0x40) = 0xffffffff; __schedule_barrier();
    *(u32*)(a0 + 0x44) = 0;
    *(u32*)(a0 + 0x48) = 0;
    *(u32*)(a0 + 0x4c) = 0;
    *(u32*)(a0 + 0x50) = 0;
    *(u32*)(a0 + 0x54) = 0;
    *(u32*)(a0 + 0x58) = 0;
    *(u32*)(a0 + 0x5c) = 0;
    *(u16*)(0x60 + a0) = 1;
    *(u16*)(a0 + 0x62) = 0x8000;
    a0[0x64] = 0;
    a0[0x65] = 0;
    a0[0x66] = 0;
    a0[0x67] = 0;
    a0[0x68] = 0;
    a0[0x69] = 0;
    a0[0x6a] = 0;
    a0[0x6b] = 0;
    a0[0x6c] = 0;
    func_0010CF7C(a0 + 0x14);
}
