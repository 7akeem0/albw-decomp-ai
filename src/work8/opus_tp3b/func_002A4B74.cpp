#include "../../work5/agent10/en204.h"
struct En2A : En {
    char padx[0xb60 - sizeof(En)];
    Timer mb60;
    char pb6c[0xb7c - 0xb6c];
    u32 mb7c;
    char pb80[0xb91 - 0xb80];
    u8 mb91;
    void f();
};
void func_002A45FC(En2A* e, s32 a);
void En2A::f() {
    mb91 = 0;
    func_002A45FC(this, 0);
    mb7c = m3e8;
    mb60.start(randU32(func_0058A7D4(this), 200) + 200);
    func_004FC07C(this, 21, -1, 0);
}
