#define SND_EXTRA bool func_001E035C(s32 a, s32 id);
#include "sndobj_a1.h"
bool SndObj::func_001E035C(s32 a, s32 id) {
    return func_001E0364(a, id, &mOwnHolder);
}
