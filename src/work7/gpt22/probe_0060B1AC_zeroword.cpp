#include "range.h"
struct NoThrow{};void*operator new(u32,NoThrow)throw();
struct Primary{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void v25();virtual void v26();virtual void v27();u8 pad[0x31c];};struct Secondary{virtual void v();};
struct Base:Primary,Secondary{u8 pad[0x64c-0x324];Base(void*);};
struct Zero{u32 v;Zero():v(0){}};
struct D:Base{Zero value;D(void*);};
extern "C" void func_001E518C(D*,void*,u32,u32,u32);
extern "C" void func_00506068(D*,void*);
inline D::D(void*p):Base(p),value(){func_001E518C(this,p,0,0,0);func_00506068(this,p);}
D*target(void*p){return new((NoThrow()))D(p);}
