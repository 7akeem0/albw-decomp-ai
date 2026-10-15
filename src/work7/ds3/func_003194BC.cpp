#include "ds3.h"
struct S3194BC { char pad[0x4c4]; u32 m4C4; };
extern "C" void* data_00706E20;
extern "C" void* func_0052FBA0(void*, u32);
extern "C" int func_003368D4(void*);
extern "C" void func_00665160(void*, int) __attribute__((weak));
void func_003194BC(S3194BC* self) {
    void* mgr = data_00706E20;
    if (mgr == 0) return;
    void* a = func_0052FBA0((char*)mgr + 0x3dbbc, self->m4C4);
    if (a == 0) return;
    if (func_003368D4(a) == 0) return;
    func_00665160((char*)self + 0x49c, 4);
}
