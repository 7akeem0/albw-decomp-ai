#include "../../work5/agent12/en208.h"
struct E15C { char p[0x924]; u32 m924; char p2[0xe50-0x928]; EffHandle me50; void f(); };
void func_004F88A0(E15C* e, u32 v);
void func_004FC570(E15C* e);
void E15C::f() {
    func_004F88A0(this, m924);
    func_004FC570(this);
    if (me50.isValid()) {
        me50.p->stopIf(1);
    }
}
