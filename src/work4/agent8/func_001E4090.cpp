#define A1E4_EXTRA void func_001E4090(s32 id);
#include "actor1e4.h"

void Actor1E4::func_001E4090(s32 id) {
    func_0016898C(m48C, AnimReq(id, 0, 0));
    play(m48C);
}
