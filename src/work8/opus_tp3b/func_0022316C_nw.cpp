#include "../../work7/ds3/ds3.h"
extern "C" int func_00521060(void*);
extern "C" void  func_0065E630(void*, int);
void func_0022316C(char* self) {
    if (*(u8*)(*(char**)(self + 0x510) + 4)) return;
    f32* sc = (f32*)(self + 0x4e4);
    for (int i = 0; i < 3; i++) sc[i] = 1.0f;
    char* d = self + 0x8bc;
    if (*(s16*)(self + 0x508) <= 0) { func_0065E630(d, 4); return; }
    if (func_00521060(self) == 0) func_0065E630(d, 0);
    else func_0065E630(d, 1);
}
