#define CLS_EXTRA void resetM3dc();
#include "../../work4/shared_include/cls_1DE.h"
// m3dc zeroed by a 3-iteration float loop (Vec3a::setZero, KB #8): unrolled vstr x3 BEFORE the strb.
// Plain m3dc.set(0,0,0) / x=y=z=0 schedule the strb m6c1 first (75%).
void Cls::resetM3dc() {
    Vec3a* p = (Vec3a*)&m3dc;
    p->setZero();
    m6c1 = 1;
}
