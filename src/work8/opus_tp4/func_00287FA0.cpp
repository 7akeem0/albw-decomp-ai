#include "../../work5/agent4/obj1d6.h"
class Obj287 : public Base37C {
public:
    void func_00287FA0(s32 a);
    char pad000[0x4e0];
    s8 m4e0;
    char pad4e1[0x534 - 0x4e1];
    Timer m534;
};
void Obj287::func_00287FA0(s32 a) {
    if (a == 0 && (s8)m4e0 == 3)
        m534.start(3);
    f37C6F0(a);
}
