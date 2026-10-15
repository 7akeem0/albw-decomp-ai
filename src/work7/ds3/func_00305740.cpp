#include "ds3.h"
extern "C" int func_00588BF0(void*, int);
extern "C" void func_00305A48(void*);
int func_00305740(char* self) {
    if ((*(u8*)(self + 0x4a9) == 0 && func_00588BF0(self, 0) != 0) ||
        (*(u8*)(self + 0x4a9) == 1 && func_00588BF0(self, 0) == 0)) {
        *(u8*)(self + 0x4aa) = 1;
        *(u8*)(self + 0x4ab) = 1;
        return 3;
    }
    *(u8*)(self + 0x494) = 1;
    func_00305A48(self);
    return 2;
}
