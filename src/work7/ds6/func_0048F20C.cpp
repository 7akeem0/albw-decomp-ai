#include "ds6.h"

struct V48F20C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16();
};
struct Obj48F20C : V48F20C {
    char _pad[0x1c - 4];
    void* m1c;
    char _pad2[0x54 - 0x20];
    u8 m54;
    char _pad3[0x58 - 0x55];
    void* m58;
    char _pad4[0x5d - 0x5c];
    u8 m5d;
};

void func_0040855C(Obj48F20C* self);
void func_0058FA08(void* p);

void func_0048F20C(Obj48F20C* self) {
    func_0040855C(self);
    self->v16();
    if (self->m1c) {
        func_0058FA08(self->m1c);
        self->m1c = 0;
    }
    if (self->m58) {
        func_0058FA08(self->m58);
        self->m58 = 0;
    }
    self->m54 = 0;
    self->m5d = 0;
}
