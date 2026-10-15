#include "range.h"
struct Primary4A05 {
    virtual ~Primary4A05();
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    char pad4[0x14];
};
struct Secondary4A05 { virtual ~Secondary4A05() {} char pad4[0x38]; };
struct Base4A05 : Primary4A05, Secondary4A05 { virtual ~Base4A05(); };
struct Object4A05 : Base4A05 { virtual ~Object4A05(); };
extern void func_0049B0E4(Object4A05*);
Object4A05::~Object4A05() { func_0049B0E4(this); }
