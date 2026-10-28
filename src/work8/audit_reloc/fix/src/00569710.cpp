#include "../../../F6/range.h"
struct W;
struct X { u32 m0; void* m4; W* m8; };
struct W {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void vc(u32, u32); virtual void vz();
    u8 flag;
};
extern void* func_0056CC94(void*);
void* func_00569710(X* p, u32 a, u32 b) {
    void* c = func_0056CC94(p->m4);
    W* e = c ? p->m8 : 0;
    if (e == 0) return c;
    u8 f = e->flag;
    u32 aa = a, bb = b;
    if (f != 0) e->vc(aa, bb);
    return (void*)1;
}
