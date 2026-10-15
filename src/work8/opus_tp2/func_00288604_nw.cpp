#define OBJ1D6_EXTRA
#include "../../work5/agent4/obj1d6.h"
struct StateMgr661 {  void changeState(s32 st); };
struct Obj288 {
    char pad0[0x3dc];
    Vec3 m3dc;
    char pad3e8[0x4dc - 0x3e8];
    StateMgr661 m4dc;
    char pad4dd[0x518 - 0x4dd];
    u8 m518;
    char pad519[0x534 - 0x519];
    Timer m534;
    const Vec3& f559B54();
    bool f521064();
    bool f520EE4();
    void f();
};
void Obj288::f() {
    m3dc.set(f559B54());
    if (m534.step2())
        return;
    if (!f521064() && m518 != 0) {
        m4dc.changeState(2);
        return;
    }
    if (f520EE4())
        m4dc.changeState(6);
}
