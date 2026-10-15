#include "ds3.h"
extern "C" void func_0036D0E0(void*);
extern "C" void* func_0035D6D0(void*);
extern "C" void* func_00503368(void*);
extern "C" void* func_004EE540(void*);
extern "C" void func_001510A4(void*);
void func_00283B18(char* self) {
    char* p = self;
    char* vt1 = (char*)0x6EB7B0;
    *(void**)p = vt1;
    p += 0x320;
    *(void**)p = vt1 + 0xb8;
    p += 0x548;
    func_0036D0E0(p);
    func_0036D0E0(self + 0x864);
    char* vt2 = (char*)0x6D2174;
    *(void**)self = vt2;
    *(void**)(self + 0x320) = vt2 + 0x98;
    char* q = (char*)func_0035D6D0(self + 0x75c) - 0x2e4;
    char* r = (char*)func_00503368(q);
    char* vt3 = (char*)0x6E0B24;
    *(void**)(r - 0x158) = vt3 + 0x5c;
    *(void**)(r - 0x478) = vt3;
    func_001510A4((char*)func_004EE540(r - 0x68) - 0x410);
}
