#define EN_EXTRA void f();
#include "en208.h"
void En208::f() {
    func_004FC570(this);
    m9ac.m34 = 0;
    if (mcc8.isValid()) {
        mcc8.p->stopIf(1);
    }
}
