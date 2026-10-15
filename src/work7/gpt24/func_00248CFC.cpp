#include "range.h"
struct Obj248C24 {
    virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();
    virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();
    virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();
    virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual s32 v19(s32*);
    char pad[0x2d7-4];u8 flag;
};
extern void func_00588C14(Obj248C24*,s32,s32);
extern "C" s32 target(Obj248C24*p,s32*message){*message=61;func_00588C14(p,0,1);p->flag=1;return p->v19(message);}
