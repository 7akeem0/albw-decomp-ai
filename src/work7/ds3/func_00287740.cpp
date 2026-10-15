#include "ds3.h"
extern "C" void* func_0052FBA0(void*, u32);
extern "C" u32 func_00588BE4(void*);
extern "C" int func_00556AC4(void*);
extern void* data_00706E20;
extern u32 ro_006930E0;
extern void* data_0070FB60;
struct V13 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void call(); };
void func_00287740(char* self, u32* a1) {
    if (*(u8*)(self + 0x2d7)) return;
    char* a = (char*)func_0052FBA0((char*)data_00706E20 + 0x3dbbc, *a1);
    if (!a) return;
    if (func_00588BE4(a) != ro_006930E0) return;
    if (func_00556AC4(data_0070FB60) != 0) return;
    ((V13*)(self + 0x320))->call();
    *(u8*)(self + 0x2d7) = 1;
}
