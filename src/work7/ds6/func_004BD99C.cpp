#include "ds6.h"

struct Obj4BD99C {
    char _pad[0x950];
    u32 m950;
};

extern void* data_00706E20;
void* func_0052FBA0(void* mgr, u32 h);
void func_00391558(void* a);

void func_004BD99C(Obj4BD99C* self) {
    u32 h = self->m950;
    if (h == 0) return;
    void* mgr = data_00706E20;
    if (mgr == 0) return;
    void* a = func_0052FBA0((char*)mgr + 0x3DBBC, h);
    if (a == 0) return;
    func_00391558(a);
}
