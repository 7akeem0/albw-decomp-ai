#include "range.h"
// Primary::~Primary maps to func_004B9AA0; D vtable maps to ro_006F2854.
struct Primary{virtual ~Primary();virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();char pad[52];};
struct Secondary{virtual ~Secondary(){}};
struct D:Primary,Secondary{void finish(){}virtual ~D();};D::~D(){finish();}
