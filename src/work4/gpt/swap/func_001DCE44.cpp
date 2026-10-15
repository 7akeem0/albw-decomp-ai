#include "../include/swap_state.h"

// Deliberately out of class, without inline: ARMCC auto-inlines this later.
void Cls::done() {
    func_unk_inlined(m614);
    m618->m30 = 0;
}

bool Cls::func_001DCE44(int a, int b) {
    if (func_0052E620(this, b)) {
        Src3B40* src = &m5f4->m3b40;
        StateArg67* arg = (StateArg67*)func_0028F7B0(m614, 0x67);
        if (arg) {
            arg->setArg(src->m24, src->m0, src->m64);
            done();
            return true;
        }
    } else if (ok()) {
        if (func_0028F7B0(m614, a ? 0x69 : 0x68)) {
            done();
            return true;
        }
    }
    return false;
}
