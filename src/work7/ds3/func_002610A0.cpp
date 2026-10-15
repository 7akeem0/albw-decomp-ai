#include "ds3.h"
extern "C" void func_0010DA24(void*);
extern "C" void* func_002E0168(s32);
extern "C" void* func_0019B04C(s32);
extern "C" void func_0019B064(void*, int, int);
extern "C" void func_005808BC(void*, void*);
void func_002610A0(void* arg) {
    char t[0x14];
    func_0010DA24(t);
    for (s32 i = 0; i < 0x280; i++) {
        if (func_002E0168(i) == arg) {
            void* p = func_0019B04C(i);
            if (p != 0) func_0019B064(p, 0, 0);
        }
    }
    func_005808BC(t + 8, t);
}
