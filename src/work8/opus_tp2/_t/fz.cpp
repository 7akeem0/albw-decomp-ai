#include "../../F6/range.h"
struct W;
struct X { u32 m0; void* m4; W* m8; };
struct W {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void vc(u32, u32, u32); virtual void vz();
    u8 flag;
};
extern void* func_0056CB68(void*, u32, u32, u32);
static inline void fire(W* e, u32 a, u32 b, u32 z) { if (e->flag != 0) e->vc(a, b, z); }
void* func_00569B0C(X* p, u32 a, u32 b) {
    void* c = func_0056CB68(p->m4, a, b, 0);
    W* e = c ? p->m8 : 0;
    if (e == 0) return c;
    fire(e, a, b, 0);
    return (void*)1;
}
