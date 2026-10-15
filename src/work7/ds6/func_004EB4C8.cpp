#include "ds6.h"

struct S4EB4C8 { char _pad[0x4c]; };
struct Obj4EB4C8 {
    char _pad[0x4c];
    void* m4c;
    void* m50;
};

void func_00689024(void* p);
u32 func_00539024(void* p, void* q);
void func_00296BD0(void* p, u32 a);
void func_00297140(void* p, void* q);

void func_004EB4C8(Obj4EB4C8* self, u32 a) {
    S4EB4C8 s;
    func_00689024(&s);
    if (func_00539024(self->m50, &s) != 0) {
        func_00296BD0(self->m4c, a);
        func_00297140(self->m4c, &s);
    }
}
