#include "ds3.h"
extern "C" void* func_002E0168(s32);
extern "C" void* func_0019B04C(s32);
extern "C" void func_0019B4D4(void*);
void func_0026110C(void* p) {
    if (!p) return;
    for (s32 i = 0; i < 0x280; ++i) {
        if (func_002E0168(i) == p) {
            void* r = func_0019B04C(i);
            if (r) func_0019B4D4(r);
        }
    }
}
