#include "ds3.h"
extern "C" int func_0058AB74(void*);
extern "C" void func_004FC07C(void*, int, int, int);
extern "C" void func_004FABDC(void*, int, int, int);
struct V31 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void call(int, int);
};
void func_002F8DE4(char* self, int a1, int a2, int a3) {
    if (a2 < 0) { if (func_0058AB74(self) == 5) a2 = 0xc; }
    if (a3 != 0) func_004FC07C(self, a1, a2, 0);
    else func_004FABDC(self, a1, a2, 0);
    ((V31*)self)->call(a1, a2);
}
