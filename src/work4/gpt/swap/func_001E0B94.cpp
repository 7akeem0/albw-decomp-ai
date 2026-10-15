#include "../include/swap_query.h"

void* Mgr1E0::func_001E0B94(const char* a,s32 idx){
    bool lock = true;
    Result result;
    if (idx >= 0 && m1fd4[idx] != 0) {
        result.v = &((PArr&)m1fd4)[idx]->me4;
        lock = false;
    } else {
        result.v = m1fd0;
    }
    CondLock l(&m1fb4, lock);
    u8 ok = 0;
    if (!func_00489CE0(result.v, &ok, a) || !ok) {
        void* z = 0;
        result.v = z;
    }
    return result.v;
}
