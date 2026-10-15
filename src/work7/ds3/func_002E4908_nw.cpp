#include "ds3.h"
extern "C" int func_00521060(void*);
extern "C" void  func_00663E64(void*, int);
void func_002E4908(char* self) {
    if (*(u8*)(*(char**)(self + 0x510) + 4)) return;
    char* d = self + 0x8cc;
    if (*(s16*)(self + 0x508) <= 0) { func_00663E64(d, 8); return; }
    if (func_00521060(self) == 0) func_00663E64(d, 3);
    else func_00663E64(d, 4);
}
