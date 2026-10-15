#include "range.h"
extern "C" void func_0012C790(void*);
extern "C" void func_001B6B38(void*);
extern "C" void func_004441E4(void*);
struct Sub70 { u8 pad0[0xd]; u8 m0d; u8 m0e; };
struct Obj {
    u8 pad0[0x54];
    void* m54;
    u16 m58;
    u8 pad1[0x70 - 0x5a];
    Sub70* m70;
    u16 m74;
    u8 pad2[0xf8 - 0x76];
    void* m0f8;
    void f();
};
void Obj::f() {
    if (m58 == 3) {
        if (m54 != 0) func_0012C790(m54);
    }
    if (m70 != 0) {
        if (m70->m0d != 0 || m70->m0e != 0) {
            if (m74 == 2) {
                func_0012C790(m70);
                func_001B6B38(m70);
            }
        }
    }
    if (m0f8 != 0) {
        func_004441E4(m0f8);
        return;
    }
}
