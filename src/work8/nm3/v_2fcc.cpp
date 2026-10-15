#include "ds3.h"
struct X2FCC { char pad[0x44]; void* m44; };
struct S2FCC { char pad[0xae]; u8 bAE; };
extern "C" X2FCC* data_0070B728;
bool func_002FCC34(S2FCC* p) {
    X2FCC* g = data_0070B728;
    if (!g) return false;
    void* x = g->m44;
    S2FCC* q = p;
    if (!x) return false;
    if (x == p) { q->bAE = 1; return true; }
    return false;
}
