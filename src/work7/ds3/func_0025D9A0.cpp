#include "ds3.h"
struct S25D9 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    char g[0x58-4];
    void* m58;
};
extern "C" void* data_00712538;
extern "C" void* data_00712F70;
extern "C" void func_001E1750(void*);
extern "C" void func_0014B188(void*);
extern "C" void func_0049F734(S25D9*, void*);
void func_0025D9A0(S25D9* p) {
    func_001E1750(data_00712538);
    func_0014B188(data_00712F70);
    p->v23();
    func_0049F734(p, p->m58);
}
