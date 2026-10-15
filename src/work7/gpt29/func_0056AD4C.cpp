#include "range.h"
struct V56AD{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();virtual u32 value();};
struct O56AD{char pad[0x14];V56AD*child;u32 a,b,pad20,value;};
u32 f_0056AD4C(O56AD*p){if(p->a&&p->b)return p->value;return p->child->value();}
