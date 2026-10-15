#define CLS_EXTRA void func_001DB520();
#include "../../work4/shared_include/cls_1DE.h"
void func_00255070(ItemTable40C* t);
// ptr/value in r0/r1 (not r1/r0) = inline setter (KB #31/#129)
inline void setM7c(Actor* a, u8 v) { a->m7c = v; }
void Cls::func_001DB520() {
    func_00255070(&m40c);
    setM7c(m614, 0);
}
