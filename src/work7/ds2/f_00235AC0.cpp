#include "ds2.h"

extern char* data_00706E20;
extern void* func_0052FBA0(void*, u32);
extern s32 func_00588BE4(void*);
extern u32 ro_006930EC;
extern void func_0034C8F0(void*, int, void*);

u32 func_00235AC0(void* a0, char* a1) {
    u32 h = *(u32*)(a1 + 0x28);
    if (h != 0) {
        char* g = data_00706E20;
        if (g != 0) {
            void* p = func_0052FBA0(g + 0x3dbbc, h);
            if (p != 0 && func_00588BE4(p) == (s32)ro_006930EC) {
                func_0034C8F0(*(void**)((char*)a0 + 0x84), 0, a1);
            }
        }
    }
    return 1;
}
