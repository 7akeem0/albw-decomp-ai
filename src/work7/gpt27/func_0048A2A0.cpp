#include "range.h"
struct Primary48A{virtual ~Primary48A(){}virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();u8 pad4[0x14];};
struct Secondary48A{virtual ~Secondary48A(){} };
struct Base48A:Primary48A,Secondary48A{u8 pad1c[0x78-0x1c];volatile u32 mode;void*handle;void*owner;virtual ~Base48A();};
struct Obj48A:Base48A{virtual ~Obj48A();void finish();};
void Obj48A::finish(){mode=3;u32 observed=mode;}
Obj48A::~Obj48A(){finish();}
