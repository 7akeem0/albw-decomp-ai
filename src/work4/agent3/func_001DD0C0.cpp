#define CLS_EXTRA void func_001DD0C8(int a, int b, int c);
#include "../shared_include/cls_1DE.h"

// Thunk: tail call to Cls::func_001DD0C8, which is the NEXT function in .text;
// armlink (--branchnop, default) replaced 'b func_001DD0C8' with a NOP (mov r0,r0).
struct Owner0C0 {
    char pad[0x10];
    Cls* m10;
    void func_001DD0C0(int a, int b, int c);
};

void Owner0C0::func_001DD0C0(int a, int b, int c) {
    m10->func_001DD0C8(a, b, c);
}
