#include "ds6.h"

struct V4A555C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual u32 v16();
};

struct Obj4A555C : V4A555C {
    char _pad[0x44 - 4];
    void* m44;
};

u32 func_0034BB9C(void* p);
 void func_0066F90C(void* p, u32 v);

void func_004A555C(Obj4A555C* self) {
    if (func_0034BB9C(self->m44) == 0) return;
    if (self->v16() == 0) return;
    func_0066F90C((char*)self + 0x20, 0);
}
