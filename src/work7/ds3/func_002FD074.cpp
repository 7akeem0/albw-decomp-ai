#include "ds3.h"
struct S2FD0 { char pad[0x2dc]; u32 m2DC; };
extern "C" void** data_00706E20;
extern "C" void* func_0052FBA0(void*, u32);
extern "C" bool func_00318F9C(void*, void*);
bool func_002FD074(S2FD0* p, void* a) {
    void* g = data_00706E20;
    if (g) {
        void* actor = func_0052FBA0((char*)g + 0x3dbbc, p->m2DC);
        if (actor) return func_00318F9C(actor, a);
    }
    return true;
}
