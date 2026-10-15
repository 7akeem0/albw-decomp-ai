#include "ds4.h"
extern "C" void func_004CF478(u32, s32, u32);
extern "C" void func_00169A80(u32);
extern "C" void func_00168E9C(u32, u32, u32);
extern "C" void func_003AB994(void*, u32);
extern "C" void func_003AB8DC(void*, u32);
extern "C" void func_003B01AC(void*);

extern "C" void func_003AFDB4(char* self) {
    func_004CF478(*(u32*)(self + 0x40), (s32)*(s8*)(self + 0x48), 0);
    if (*(u8*)(self + 0x48) == 0) {
        *(u64*)(self + 0x50) = 0;
        return;
    }
    if (*(u8*)(*(u32*)(self + 0x40) + 0x30) != 0) {
        func_00169A80(*(u32*)(self + 0x44));
        func_00168E9C(*(u32*)(self + 0x44), *(u32*)(self + 0x40), 0);
    }
    func_003AB994(self, *(u32*)(self + 0x40));
    func_003AB8DC(self, *(u32*)(self + 0x40));
    func_003B01AC(self);
}
