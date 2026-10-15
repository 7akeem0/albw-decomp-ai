#define ACT_EXTRA void func_001D1228();
#include "a1_1d0.h"
void Act1D0::func_001D1228() {
    for (int i = 0; i < 3; i++)
        (&m3dc.x)[i] = 0.0f;
    m570->setM61(0);
    func_004EAF08(data_00711F50, 1);
    func_00150A84(this, sead::SafeString("SE_Kokko_V_ANGLY"), 0);
    func_001CFEF4(6, 1.0f);
}
