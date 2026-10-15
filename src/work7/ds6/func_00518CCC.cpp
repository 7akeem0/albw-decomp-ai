#include "ds6.h"

extern "C" void* func_0048D088(void* self, u32 arg, const char* name);
extern "C" void func_002DF3E4(void* p);
extern void* data_00712588;
extern const char ro_006A4C28[];

void* func_00518CCC(void* self, u32 a) {
    char* p = (char*)func_0048D088(self, a, ro_006A4C28);
    *(void**)p = (void*)0x6EF524;
    func_002DF3E4(data_00712588);
    return p;
}
