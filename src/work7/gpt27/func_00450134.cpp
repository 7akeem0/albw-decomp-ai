#include "range.h"
struct Primary450{virtual ~Primary450();virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();u8 pad4[0x34];};
struct Secondary450{virtual ~Secondary450();};
struct Base450:Primary450,Secondary450{u8 pad3c[0x38];Base450(bool);};
struct Derived450:Base450{Derived450();};
Derived450::Derived450():Base450(false){}
