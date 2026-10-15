struct Model600; struct Obj604; struct Part630; struct Obj60C;
void func_0028C02C(Model600* m, bool v);   // Model600::setVisible(bool)?
void func_002D16D0(Obj604* o, bool v);     // forwarder: o->m28 -> next fn
void func_002D4188(Part630* p, bool v);    // p->m4: 0x4CF478(.., v, 0)
void func_00151148(Obj60C* o, bool v);     // o->m1c -> 0x2C34A4
#define CLS_EXTRA void func_001DC844(bool on); void func_001DC928(bool on);
#include "../shared_include/cls_1DE.h"

// 0x1DC844: the m600 local is loaded BEFORE the if (hoisted load in orig); the second
// call re-reads the member. Without the local ARMCC CSEs this+0x600 into r4 (94.7%).
// Last word: orig 'b 0x1DC928' was turned into a NOP by armlink (next function) and is
// stripped by check -> 56/57 words is the best possible (linker artifact, see KB #68).
void Cls::func_001DC844(bool on) {
    Model600* m = m600;
    if (on) {
        m6bb = 1;
        func_0028C02C(m, false);
        func_0028C02C(m600, false);
        func_002D16D0(m604, false);
        for (int i = 0; i < 25; i++)
            if (m630[i])
                func_002D4188(m630[i], false);
        func_00151148(m60c, false);
        func_001DC928(false);
    } else {
        m6bb = 0;
        func_0028C02C(m, true);
        func_0028C02C(m600, false);
        func_002D16D0(m604, false);
        for (int i = 0; i < 25; i++)
            if (m630[i])
                func_002D4188(m630[i], false);
        func_00151148(m60c, true);
        func_001DC928(true);
    }
}

// NOTE: defining 0x1DC928 in this same file makes ARMCC inline it here (102 words, 65.8%);
// the original kept the tail call, so 0x1DC928 lives in func_001DC928.cpp.
