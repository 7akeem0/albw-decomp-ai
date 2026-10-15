#include "ds3.h"
struct S2FCB { char pad[0x118]; u8 b118; };
struct S2FCBG { char pad[0x18]; void* m18; };
extern "C" S2FCBG* data_00708998;
extern "C" void func_001E8268(void*, void*, void*, void*);
extern "C" void func_0016625C(S2FCB*);
void func_002FCB6C(S2FCB* p) {
    if (p->b118) {
        func_001E8268(data_00708998->m18, (char*)p + 0xac, (char*)p + 0x10c, (char*)p + 0xc0);
    }
    func_0016625C(p);
}
