#include "ds3.h"
extern "C" int abs(int);
struct M2E00 { char pad[4]; s16 a, b; };
struct G2E00 { char pad[0x40]; M2E00* m40; };
extern "C" void* data_0070C8E0;
s32 func_002E0024(s32 x) {
    G2E00* g = (G2E00*)data_0070C8E0;
    M2E00* m = g->m40;
    s32 p = m->a;
    s32 q = m->b;
    x += (p ^ (p >> 31)) - (p >> 31);
    --x;
    if (q < 0) ++x;
    if (q * p < 0) ++x;
    return x;
}
