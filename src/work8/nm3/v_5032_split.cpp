#include "ds6.h"
struct V5032CC {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual u32 v16();
};
struct G5032CC { char _pad[0x64]; void* m64; };
struct Sub5032CC { char _pad[0x14]; u32 m14; };
extern void* data_0070D7D0;
extern void* data_007142C8;
void func_0051AA44(void* p);
void func_00230D94(V5032CC* self);
void func_005032CC(V5032CC* self) {
    Sub5032CC* p = (Sub5032CC*)((G5032CC*)data_0070D7D0)->m64;
    u32 r = self->v16();
    bool eq = p->m14 == r;
    if (eq) p->m14 = 0;
    if (eq) func_0051AA44(data_007142C8);
    func_00230D94(self);
}
