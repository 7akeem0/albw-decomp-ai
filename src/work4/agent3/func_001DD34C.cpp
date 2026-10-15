#define CLS_EXTRA void func_001DD354();
#include "../shared_include/cls_1DE.h"

// Thunk: tail call to Cls::func_001DD354, which is the NEXT function in .text;
// armlink (--branchnop, default) replaced 'b func_001DD354' with a NOP (mov r0,r0).
struct Owner34C {
    char pad[0x14];
    Cls* m14;
    void func_001DD34C();
};

void Owner34C::func_001DD34C() {
    m14->func_001DD354();
}
