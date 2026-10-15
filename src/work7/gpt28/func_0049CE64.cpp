#include "range.h"
struct Primary49CE {
    virtual ~Primary49CE();
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    char pad4[0x14];
};
struct Secondary49CE { virtual ~Secondary49CE() {} char pad4[0x38]; };
struct Base49CE : Primary49CE, Secondary49CE { virtual ~Base49CE(); };
struct Object49CE : Base49CE { virtual ~Object49CE(); virtual void v21(); virtual void v22(); };
extern void func_0049B0E4(Object49CE*);
Object49CE::~Object49CE() { func_0049B0E4(this); }
