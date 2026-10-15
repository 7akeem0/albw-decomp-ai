typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

extern "C" void* func_0011F1D8(u32);
extern "C" void func_0011F064(void*, const char*);
extern "C" s32 func_0011F2BC(void*, const char*);

u8* func_0011EED0(u8* a0) {
    u8* p = (u8*)func_0011F1D8(0x40);
    *(u32*)p = (u32)a0;
    func_0011F064(p, "MsgPrjBn");
    *(s32*)(p + 0x14) = func_0011F2BC(p, "CLR1");
    *(s32*)(p + 0x10) = func_0011F2BC(p, "CLB1");
    *(s32*)(p + 0x1c) = func_0011F2BC(p, "ATI2");
    *(s32*)(p + 0x18) = func_0011F2BC(p, "ALB1");
    *(s32*)(p + 0x20) = func_0011F2BC(p, "ALI2");
    *(s32*)(p + 0x24) = func_0011F2BC(p, "TGG2");
    *(s32*)(p + 0x28) = func_0011F2BC(p, "TAG2");
    *(s32*)(p + 0x2c) = func_0011F2BC(p, "TGP2");
    *(s32*)(p + 0x30) = func_0011F2BC(p, "TGL2");
    *(s32*)(p + 0x34) = func_0011F2BC(p, "SYL3");
    *(s32*)(p + 0x38) = func_0011F2BC(p, "SLB1");
    *(s32*)(p + 0x3c) = func_0011F2BC(p, "CTI1");
    return p;
}
