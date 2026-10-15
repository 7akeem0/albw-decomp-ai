#include "ds3.h"
struct StateData2902 { char pad[0xc]; u8 mC; u8 mD; u8 pE[2]; f32 m10; };
struct SM2902 { StateData2902* changeState(s32); };
struct S2902 { char pad[0x48]; SM2902* m48; };
bool func_00290248(S2902* p, u8 a, u8 b, f32 f) {
    StateData2902* d = p->m48->changeState(0x97);
    if (!d) return false;
    d->mC = a; d->mD = b; d->m10 = f;
    return true;
}
