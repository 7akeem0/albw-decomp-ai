#include "ds2.h"

extern char* data_00706E20;
extern void* func_0052FBA0(void*, u32);

struct VT1C0AF4 {
    char pad[0x30];
    void (*f)(void*, int);
};
struct Sub438 { char pad[0x44]; u8 m44; };
struct Obj1C0AF4 {
    char pad0[0x438];
    Sub438* m438;
    char pad43c[0x474 - 0x43c];
    u32 m474;
};

void func_001C0AF4(Obj1C0AF4* self) {
    Sub438* q = self->m438; u8* r = &q->m44; *r = 0;
    if (self->m474 == 0) return;
    void* p = func_0052FBA0(data_00706E20 + 0x3dbbc, self->m474);
    if (p == 0) return;
    (*(VT1C0AF4**)p)->f(p, 0);
}
