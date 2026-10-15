#include "ds3.h"
struct S2FCC2 { char pad[0xac]; u16 hAC; };
extern "C" void* data_0070B728;
extern "C" bool func_004CDDEC(void*, S2FCC2*, s32);
bool func_002FCC74(S2FCC2* p, u16 a) {
    void* g = data_0070B728;
    if (g && func_004CDDEC(g, p, 0)) { p->hAC = a; return true; }
    return false;
}
