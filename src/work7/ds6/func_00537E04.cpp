#include "ds6.h"

struct Sub537E04 { char _pad[0xac]; s32 mac; };
struct Obj537E04 {
    char _pad[0xc];
    Sub537E04* mC;
};

u32 func_0057D86C(void* p);

bool func_00537E04(Obj537E04* self, u32 v) {
    if (func_0057D86C((char*)self + 0xc) == 0) return false;
    Sub537E04* p = self->mC;
    s32 x = p ? p->mac : -1;
    return (u32)x == v;
}
