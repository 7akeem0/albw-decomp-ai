#define OBJ9E4_EXTRA virtual void onEnd(s32 a, u32 b); void update();
#include "anim9e4.h"
void func_00169A80(AnimArr* a);
void func_00168E9C(AnimArr* a, u32 b, int c);
void Obj9E4::update() {
    if (m30 && mC) {
        AnimElem& e = (*mC)[0];
        if (!e.m1c) {
            bool end;
            if (e.m10 >= 0.0f) end = e.m8 == e.m14;
            else end = e.m8 <= 0.0f;
            if (end && m18 >= 0) onEnd(m18, m1c);
        }
        func_00169A80(mC);
        func_00168E9C(mC, m8, 0);
    }
}
