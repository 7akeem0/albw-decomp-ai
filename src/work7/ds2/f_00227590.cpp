#include "ds2.h"
struct Req5C { Req5C(u16 id, u32 arg, bool flag); u32 m[0x5C / 4]; };
void func_004CF478(void*, u32, u32);
void func_00151148(void*, u32);
void func_0016898C(void*, const Req5C&);

struct This22 {
    char pad0[0x594];
    void* m594;
    char pad1[0x68c - 0x598];
    void* m68c;
    char pad2[0x698 - 0x690];
    void* m698;
    char pad3[0x6a0 - 0x69c];
    f32 m6a0;
};

void func_00227590(This22* t) {
    func_004CF478(t->m594, 1, 0);
    func_00151148(t->m698, 1);
    t->m6a0 = 0.01f;
    func_0016898C(t->m68c, Req5C(0xe, 0, false));
}
