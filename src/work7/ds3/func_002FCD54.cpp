#include "ds3.h"
struct G2FCD { char pad[0x18]; void* m18; };
struct S2FCD { char pad[0xac]; u16 hAC; u8 bAE; };
extern "C" G2FCD* data_00708998;
bool func_002FCD54(S2FCD* p) {
    if (p->bAE) {
        G2FCD* g = data_00708998;
        if (!g || !g->m18) return true;
    }
    if (!p->hAC) return true;
    --p->hAC;
    return false;
}
