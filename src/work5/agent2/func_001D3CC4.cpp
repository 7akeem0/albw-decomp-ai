#define A1E4_INLINE_DTOR
#define A1D2_DTOR
#include "a2_1d2.h"

struct Mgr70FB60;
void func_00361580(Mgr70FB60* m, s32 a);

Actor1D2::~Actor1D2() {
    if (m5DF == 2) {
        func_00361580(data_0070FB60, 0);
        if (!m5E4->v16()->v10())
            m5E4->v16()->v5();
    }
}
