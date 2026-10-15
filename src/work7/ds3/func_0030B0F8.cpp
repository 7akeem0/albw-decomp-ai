#include "ds3.h"
struct X30B0 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12();
};
struct Child30B0 { char pad[0x14]; void* m14; };
struct G30B0 { char pad[0x64]; Child30B0* m64; };
extern "C" G30B0* data_0070D7D0;
void func_0030B0F8(X30B0* p) {
    p->v12();
    G30B0* g = data_0070D7D0;
    Child30B0* t = g->m64;
    if (t->m14 == p) t->m14 = 0;
}
