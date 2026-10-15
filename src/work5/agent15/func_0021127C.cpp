#define EN_EXTRA void f();
#include "en210.h"
void En210::f() {
    if (!func_0052FBA0(&data_00706E20->actors, m960)) {
        m960 = 0;
        mState.changeState(10);
    }
}
