#define OBJ1D6_EXTRA bool func_001D7238(s32 a); void startAnim(const char* n) { if (m344) m344->start(n); } \
    bool canPick() { \
        if (m515 == 4 || m515 == 5) { \
            if (m514 == 0) { if (m2c == 0) return true; } \
            else if (m514 == 7) { return true; } \
        } \
        return false; \
    }
#include "obj1d6.h"
bool Obj1D6::func_001D7238(s32 a) {
    if (m514 == 3 || m514 == 5)
        return false;
    if ((m515 == 4 || m515 == 5) && m514 == 0 && a == 5)
        return false;
    if (canPick()) {
        if (m4d8 != 8)
            m52c = 1;
    } else if (data_0070FB60->f255AB4(m510)) {
        data_00711F50->playSE(sead::SafeString("SE_PL_RUPEE_GET"), 0);
        m4.f547514();
        startAnim("Get");
        m2d7 = 1;
        return true;
    }
    return false;
}
