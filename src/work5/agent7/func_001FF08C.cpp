#define OBJ9E4_EXTRA void update14(); \
    void restart14(s32 id) { m32 = 1; func_0016898C(m14, Req5Cs(id, 0, false)); (*m14)[0].m10 = 1.0f; }
typedef unsigned int u32;
typedef int s32;
struct Req5Cs {
    Req5Cs(s32 id, u32 arg, bool flag);   // same ctor 0x2C11E8, called with an int id (no uxth)
    u32 m[0x5C / 4];
};
struct AnimArr;
void func_0016898C(AnimArr* t, const Req5Cs& r);
#include "anim9e4.h"
void func_00169A80(AnimArr* a);
void func_00168E9C(AnimArr* a, u32 b, int c);
void Obj9E4::update14() {
    if (m32 && m14) {
        AnimElem& e = (*m14)[0];
        if (!e.m1c) {
            bool end;
            if (e.m10 >= 0.0f) end = e.m8 == e.m14;
            else end = e.m8 <= 0.0f;
            if (end && m20 >= 0) restart14(m20);
        }
        func_00169A80(m14);
        func_00168E9C(m14, m8, 0);
    }
}
