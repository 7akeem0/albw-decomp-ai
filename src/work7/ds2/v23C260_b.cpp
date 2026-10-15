#include "ds2.h"
extern char* data_00706E20;
extern void* func_0052FBA0(void*, u32);
extern s32 func_00588BE4(void*);
extern u32 ro_00693308;
extern void func_004D82C4(void*, void*, void*);
extern void func_00115D70(void*, const void*, f32);
u32 func_0023C260(char* self, char* a) {
    void* p = func_0052FBA0(data_00706E20 + 0x3dbbc, *(u32*)(a + 0x28));
    if (p != 0 && func_00588BE4(p) == (s32)ro_00693308) {
        func_004D82C4(self + 0x3dc, self + 0x3dc, a + 4);
        void* q = self + 0x3dc;
        func_00115D70(q, q, 0.9f);
    }
    return 1;
}
