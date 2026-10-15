#include "ds3.h"
struct A {
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual ~A();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20();
    char padA[0x2e - 4];
    u16 m2E;
    char padB[0x2cc - 0x30];
    u32 m2CC;
    char padC[0x320 - 0x2d0];
};
struct B { virtual void b0(); };
class Base1510A4 : public A, public B { public: virtual ~Base1510A4(); };
class S29EE14 : public Base1510A4 { public: virtual ~S29EE14(); };
extern "C" void* data_00708998;
extern "C" void func_004ED680(void*, u32);
S29EE14::~S29EE14() {
    if (data_00708998 != 0 && (m2E & 0xff) == 5) func_004ED680(data_00708998, m2CC);
}
