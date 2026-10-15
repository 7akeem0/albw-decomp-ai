#include "ds6.h"

extern void* data_007153D0;
void func_0048BAF4(void* a, void* b);

struct Obj49F6F4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void vf();
};

void func_0049F6F4(Obj49F6F4* self) {
    self->vf();
    if (data_007153D0) func_0048BAF4(data_007153D0, self);
}
