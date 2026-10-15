#include "ds2.h"

extern void func_00115C54(void*, const void*, const void*);
extern void func_004F4A68(void*, void*);

struct Sub3394 { char pad0[4]; char m4[0x1c]; u16 m20; };
struct Obj223394 {
    char pad0[0x910];
    char m910[0xc];
};

void func_00223394(Obj223394* self, Sub3394* a) {
    f32 v = *(f32*)((char*)a + 8);
    v = v > 0.0f ? v : -v;
    if (0.1f > v || (a->m20 & 0x1f) == 3) {
        char* p = self->m910; func_00115C54(p, p, a->m4);
    }
    func_004F4A68(self, a);
}
