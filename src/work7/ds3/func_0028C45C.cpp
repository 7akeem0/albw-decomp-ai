#include "ds3.h"
extern "C" void func_00169A80(void*);
extern "C" void func_004CEA18(void*, int, void*);
void func_0028C45C(char* self, u32 a1, u32 a2) {
    f32 v = (a1 >= 3) ? 1.0f : 0.0f;
    char* o = *(char**)(*(char**)(self + 0x1c) + 0x14);
    if (*(f32*)(o + 8) != v) {
        *(f32*)(o + 8) = v;
        *(u8*)(o + 0x26) = 1;
    }
    func_00169A80(*(void**)(self + 0x1c));
    func_004CEA18(*(void**)(self + 0x10), (a1 != 0 && a2 != 0) ? 1 : 0, *(void**)(self + 0xa4));
}
