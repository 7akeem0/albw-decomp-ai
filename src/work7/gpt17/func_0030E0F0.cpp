#include "range.h"
struct Primary {virtual ~Primary();virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();u32 a,b;};
struct Secondary {virtual void call();};
struct Base_0030D010:Primary,Secondary {virtual ~Base_0030D010();};
struct D:Base_0030D010 {virtual ~D();};extern void func_0030DF20(D*);
D::~D(){func_0030DF20(this);}
