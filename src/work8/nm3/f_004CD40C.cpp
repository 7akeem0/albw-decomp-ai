#include "ds6.h"

extern char ro_006F80B8[];

struct V4CD40C { virtual void v0(); };
struct G4CD40C { char _pad[8]; V4CD40C* m8; void* mC; };
extern G4CD40C data_0070ADA8;

struct Obj4CD40C { void* m0; };

void* func_004A1520(void* self);

void* func_004CD40C(Obj4CD40C* self) {
    void* v = ro_006F80B8;
    self->m0 = v;
    void* c = data_0070ADA8.mC;
    if ((void*)self == c) {
        data_0070ADA8.mC = 0;
        data_0070ADA8.m8->v0();
        data_0070ADA8.m8 = 0;
    }
    return func_004A1520(self);
}
