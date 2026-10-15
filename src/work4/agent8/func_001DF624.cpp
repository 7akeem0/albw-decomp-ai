#include "sndobj.h"

bool SndObj::func_001DF624(s32 a, const sead::SafeString& name, ModelHolder* holder) {
    m110 = 1;
    s32 id = func_00587FCC(data_00711F50, name);
    if (id == -1)
        return false;
    return func_001E0364(a, id, holder);
}
