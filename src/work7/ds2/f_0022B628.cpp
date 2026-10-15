#include "ds2.h"
u32 func_00588BE4(void*);
void func_0036C408(void*, u32);
void func_0036BA20(void*);
extern u32 ro_00693960;
extern u32 ro_00693964;
extern u32 ro_0069395C;
struct This22B6 {
    char pad0[0x59c];
    BitFlag32 m59c;
    char pad1[0x968 - 0x5a0];
    char m968[1];
    char pad2[0xd08 - 0x969];
    u8 mD08;
};

void func_0022B628(This22B6* t) {
    t->m59c.set(0xc);
    t->m59c.set(0x80);
    if (func_00588BE4(t) == ro_00693960) {
        func_0036C408((char*)t + 0x968, ro_00693964);
    } else {
        func_0036C408((char*)t + 0x968, ro_0069395C);
    }
    func_0036BA20((char*)t + 0x968);
    t->mD08 = 1;
}
