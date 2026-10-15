#include "ds3.h"
extern "C" void  func_002B0754(void*, int);
extern "C" void func_002AFEF0(void*, int, int, int, int, f32);
void func_002AC268(char* self) {
    if (*(s16*)(*(char**)(self + 0x34) + 0x508) <= 0) {
        func_002B0754(self, 0x10);
        return;
    }
    if (*(u8*)(self + 0xa4)) {
        func_002AFEF0(self, 0, 0, 1, 1, 0.8f);
    } else {
        func_002AFEF0(self, 0, 0, 0, 0, 0.8f);
    }
}


