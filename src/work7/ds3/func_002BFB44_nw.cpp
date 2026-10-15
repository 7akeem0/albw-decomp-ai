#include "ds3.h"
struct M2BFB { char pad[8]; void* m8; char g[0x16-0xc]; u16 h16; };
struct S2BFB {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual s32 v25();
    char g[0x14-4];
    M2BFB* m14;
};
extern "C"  void func_00662C9C(void*, s32);
void func_002BFB44(S2BFB* p) {
    if (p->v25()) return;
    M2BFB* m = p->m14;
    if (!(m->h16 & 8)) return;
    if (m->m8) return;
    func_00662C9C((char*)p + 0x38, 1);
}
