#include "ds6.h"

extern char ro_006F8050[];

struct Sub706E20 { void* m0; void* m4; };
extern Sub706E20 data_00706E20;

struct Obj4C4D24 { void* m0; };

Obj4C4D24* func_004A1520(Obj4C4D24* self);
void func_004C5C80(void* p);

Obj4C4D24* func_004C4D24(Obj4C4D24* self) {
    void* v = ro_006F8050;
    self->m0 = v;
    void* c = data_00706E20.m4;
    if (self == c) {
        data_00706E20.m4 = 0;
        func_004C5C80(data_00706E20.m0);
        data_00706E20.m0 = 0;
    }
    return func_004A1520(self);
}
