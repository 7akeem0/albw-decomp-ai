#include "../a5.h"
struct Flag1 { Flag1(); u8 v; };  // ctor 0x323994
struct StateMgr {  void changeState(s32 s); };  // 0x65CE98
struct Ctl7E0 { bool f(s32 a, Flag1& fl, u32 b); };  // 0x503180
struct A {
    void f();
    char pad[0x2c0]; u32 m2c0; char pad2c4[0x788 - 0x2c4]; StateMgr m788; char pad789[0x7e0 - 0x789];
    Ctl7E0 m7e0; char pad7e1[0xac0 - 0x7e1]; void* mac0; char mac4[0xaec - 0xac4]; bool maec;
};
void A::f() {
    if (maec) {
        Flag1 fl;
        fl.v = 1;
        if (m7e0.f(0, fl, m2c0)) {
            mac0 = mac4;
            maec = false;
            m788.changeState(2);
        }
    }
}
