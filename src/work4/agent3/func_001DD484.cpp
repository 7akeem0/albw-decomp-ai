#define CLS_EXTRA bool func_001DD48C(int v, int b);
#include "../shared_include/cls_1DE.h"

// Thunk: tail call to Cls::func_001DD48C, which is the NEXT function in .text;
// armlink (--branchnop, default) replaced 'b func_001DD48C' with a NOP (mov r0,r0).
struct Owner484 {
    char pad[0x10];
    Cls* m10;
    bool func_001DD484(int v, int b);
};

bool Owner484::func_001DD484(int v, int b) {
    return m10->func_001DD48C(v, b);
}
