#include "ds3.h"
struct SD2920 { char pad[0x10]; u32 a, b, c, d; };
struct SM2920 { SD2920* changeState(s32); };
struct S2920 { char pad[0x48]; SM2920* m48; };
bool func_00292018(S2920* p, u32* v, u32 x) {
    SD2920* d = p->m48->changeState(0x8f);
    if (d) { d->a = v[0]; d->b = v[1]; d->c = v[2]; d->d = x; }
    return true;
}
