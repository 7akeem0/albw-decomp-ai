#define SND_EXTRA bool func_001E02B4(s32 a, const sead::SafeString& name);
#include "sndobj_a1.h"
bool SndObj::func_001E02B4(s32 a, const sead::SafeString& name) {
    s32 id = func_00587FCC(data_00711F50, name);
    if (id == -1)
        return false;
    return func_001E0364(a, id, &mOwnHolder);
}
