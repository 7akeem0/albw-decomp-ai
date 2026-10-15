#include "ds2.h"
extern char* data_00706E20;
extern void func_004CF478(void*, u32, u32);
extern void* func_0052FBA0(void*, u32);
void func_001C0B48(void* self) {
    char* p0 = *(char**)((char*)self + 0x320);
    (*(void (*)(void*))(*(void**)(p0 + 0x30)))((char*)self + 0x320);
    func_004CF478(*(void**)((char*)self + 0x430), 0, 0);
    char* q0 = *(char**)((char*)self + 0x438);
    q0[0x44] = 0;
    u32 h = *(u32*)((char*)self + 0x474);
    if (h == 0) return;
    char* p = (char*)func_0052FBA0(data_00706E20 + 0x3dbbc, h);
    if (p == 0) return;
    char* vt = (char*)*(void**)p;
    (*(void (*)(void*, int))(*(void**)(vt + 0x30)))(p, 0);
}
