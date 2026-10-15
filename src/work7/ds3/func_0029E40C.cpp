#include "ds3.h"
struct V29E4 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); };
struct S29E4 { char pad[0x14]; u32 m14; char g[4]; u32 m1C; V29E4* m20; };
extern "C" void* data_0070B898;
extern "C" void func_00503970(void*, s32);
void func_0029E40C(S29E4* p) {
    if (p->m20) p->m20->v17();
    p->m14 = 0; p->m1C = 0; p->m20 = 0;
    func_00503970(data_0070B898, 6);
}
