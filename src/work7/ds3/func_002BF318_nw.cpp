#include "ds3.h"
struct S2BF3 { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20(); virtual s32 v21(); char pad[0x5d-4]; u8 b5D; u8 b5E; u8 b5F; };
extern "C"  void func_00662B58(void*, s32);
void func_002BF318(S2BF3* p) {
    if (p->v21() != 0) return;
    if (p->b5D) p->b5F = 1;
    func_00662B58((char*)p + 0x38, 0);
}
