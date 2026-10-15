#include "ds3.h"
extern "C" void func_001E8268(void*, void*, void*, void*);
extern "C" int func_00588268(void*);
extern "C" int func_00165E28(void*, u32);
extern "C" void func_002FCAF8(void*);
extern void* data_00708998;
extern void* data_00711F50;
void func_00299014(char* self) {
    if (*(u8*)(self + 0x34b)) {
        char* p = (char*)data_00708998;
        func_001E8268(*(void**)(p + 0x18), self + 0x398, self + 0x360, self + 0x36c);
    }
    if (func_00588268(data_00711F50) != 0) return;
    *(u8*)(self + 0x2d7) = 1;
    if (func_00165E28(*(void**)(self + 0x358), *(u32*)(self + 0x34c) & 0xffff) == 0) return;
    if (!(*(u16*)(self + 0x30) & 1)) return;
    func_002FCAF8(*(void**)(self + 0x358));
}
