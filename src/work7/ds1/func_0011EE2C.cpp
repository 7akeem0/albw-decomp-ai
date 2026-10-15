typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

extern "C" void* func_0011F1D8(u32);
extern "C" void func_0011F064(void*, const char*);
extern "C" s32 func_0011F2BC(void*, const char*);

u8* func_0011EE2C(u8* a0) {
    u8* p = (u8*)func_0011F1D8(0x20);
    *(u32*)p = (u32)a0;
    func_0011F064(p, "MsgStdBn");
    *(s32*)(p + 0x10) = func_0011F2BC(p, "LBL1");
    *(s32*)(p + 0x14) = func_0011F2BC(p, "TXT2");
    *(s32*)(p + 0x18) = func_0011F2BC(p, "ATR1");
    *(s32*)(p + 0x1c) = func_0011F2BC(p, "TSY1");
    return p;
}
