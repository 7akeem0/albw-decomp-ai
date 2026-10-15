#include "ds6.h"
struct Sub537DB4 { char _pad[0xac]; s32 mac; };
struct Obj537DB4 { char _pad[0xc]; Sub537DB4* mC; };
u32 func_0057D86C(void* p);
u32 func_00587FCC(void* p, u32 a);
extern void* data_00711F50;
bool func_00537DB4(Obj537DB4* self, u32 a) {
    if (func_0057D86C(&self->mC) == 0) return false;
    Sub537DB4* p = self->mC;
    s32 id = p ? p->mac : -1;
    s32 v = (s32)func_00587FCC(data_00711F50, a);
    return id == v;
}
