#define EN_EXTRA void f();
#include "en202.h"
void En202::f() {
    func_004FC218(this, 1, 0, 0x7fff);
    if (!func_004F70A8(this)) return;
    func_004FC78C(this, func_0058A468(this));
    s8 st = mState.mCur;
    if (st != 3 && st != 4) {
        if (func_004F8998(this, 0, 0)) mState.changeState(3);
    }
    mState.execute();
    func_004F8964(&m3dc.y, true, func_004F898C());
    func_004FB0D8(this, &m3dc.y);
    func_004F48F0(this);
    func_004F5588(this);
    func_004F5BD8(this, 0, 0);
}
