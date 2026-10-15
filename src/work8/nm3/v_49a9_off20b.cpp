#include "ds6.h"
extern char ro_006F7220[];
u32 func_00569658(void* p);
void func_00408B58(void* p);
void* func_00409DD4(void* p);
void* func_0058FA5C(void* p);
void* func_0049A900(void* self) {
    char* v2 = ro_006F7220 + 0x20;
    *(void**)self = ro_006F7220;
    *(void**)((char*)self + 8) = v2;
    if (func_00569658((char*)self + 8) != 0) func_00408B58((char*)self + 8);
    return func_0058FA5C((char*)func_00409DD4((char*)self + 8) - 8);
}
