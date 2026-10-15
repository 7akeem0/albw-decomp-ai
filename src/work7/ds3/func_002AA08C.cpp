#include "ds3.h"
extern "C" void func_002DFF7C(void*);
extern "C" u32 func_0019B04C(u32);
extern "C" int func_00581D60(void*);
extern "C" void func_004C43E0(void*, void*);
extern u32 ro_00693A18;
extern void* data_0070C8E0;
extern void* data_00706E20;
void func_002AA08C(char* self, u32* a1) {
    char buf[0x2c4];
    *(u32*)(buf + 0x20) = 0; *(u32*)(buf + 0x24) = 0; *(u32*)(buf + 0x1c) = 0;
    *(u32*)(buf + 0x48) = 0; *(u32*)(buf + 0x4c) = 0; *(u32*)(buf + 0x2c0) = 0;
    func_002DFF7C(buf);
    *(u32*)buf = func_0019B04C(ro_00693A18);
    *(u16*)(buf + 0x50) = (u16)func_00581D60(data_0070C8E0);
    *(u32*)(buf + 4) = *(u32*)(self);
    *(u32*)(buf + 8) = *(u32*)(self + 4);
    *(u32*)(buf + 0xc) = *(u32*)(self + 8);
    *(u32*)(buf + 0x4c) = a1[0];
    func_004C43E0(data_00706E20, buf);
}
