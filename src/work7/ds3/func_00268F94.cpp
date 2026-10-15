#include "ds3.h"
extern "C" void* func_0052FBA0(void*, u32);
extern "C" u32 func_00588BE4(void*);
extern "C" void* func_004F4A68(void*, void*);
extern void* data_00706E20;
extern u32 ro_006933F8;
extern u32 ro_00693580;
void* func_00268F94(char* self, char* a1) {
    char* a = (char*)func_0052FBA0((char*)data_00706E20 + 0x3dbbc, *(u32*)(a1 + 0x28));
    if (a) {
        u32 id = func_00588BE4(a);
        if (id == ro_006933F8 || id == ro_00693580) return 0;
    }
    return func_004F4A68(self, a1);
}
