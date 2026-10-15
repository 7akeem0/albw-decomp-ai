#include "ds4.h"
extern "C" void func_0066697C(void*, u32);
extern "C" u32 func_00325428(void*);

extern "C" void func_0035C930(char* self) {
    char* p = self + 0x4f8;
    float a = *(float*)(self + 0x520);
    if (a == 0.0f) {
        float b = *(float*)(self + 0x528);
        if (b == 0.0f) {
            if (((u32 (*)(void*))(*(void**)(*(char**)self + 0x68)))(self) == 0) {
                if (func_00325428(self) != 0) func_0066697C(p, 2);
                return;
            }
        }
    }
    func_0066697C(p, 0);
}
