#include "mgr1E0.h"
void Mgr1E0::func_001E0AF4() {
    s32 idx = 5 - m1fa0;
    PtrArray<VObj>& arr = mGroups[idx].mArr;
    for (s32 i = 0; i < arr.size(); i++)
        arr.at(i)->v8();
    arr.clear();
    mGroups[idx].m4->v10();
}
