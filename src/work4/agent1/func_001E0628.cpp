#define SND_EXTRA bool func_001E0628(s32 a, s32 id, ModelHolder* holder);
#include "sndobj_a1.h"
bool SndObj::func_001E0628(s32 a, s32 id, ModelHolder* holder) {
    m110 = 1;
    return func_001E0098(a, id, holder);
}
