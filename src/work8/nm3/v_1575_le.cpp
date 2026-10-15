#include "ds2.h"
extern f32 func_0058AA40(void*);
extern f32 func_0058AC38(void*);
extern void func_004FABDC(void*, int, int, int);
extern void func_004FB0A4(void*, f32);
void func_001575B8(void* self) {
    *(f32*)((char*)self + 0x3dc) = 0.0f;
    *(f32*)((char*)self + 0x3e4) = 0.0f;
    f32 a = func_0058AA40(self);
    f32 b;
    if (a <= 1.0f) b = func_0058AC38(self);
    else b = func_0058AA40(self);
    func_004FABDC(self, 3, 1, 0);
    func_004FB0A4(self, b + 1.0f);
}
