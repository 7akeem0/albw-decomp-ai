#include "range.h"
bool f_00653388(CostPair30* p,bool second) {
    u16 cost=second?p->costB:p->costA;
    if(func_005568D4(data_0070FB60)<cost) return false;
    func_00255AB4(data_0070FB60,-(second?p->costB:p->costA));
    return true;
}
