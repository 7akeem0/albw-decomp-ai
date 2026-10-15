#include "range.h"
// Primary virtual layout inferred from secondary vtable offset 54.
// Original vtable 006EB520, constructor 00137F88, allocation0010BAB4.
struct NoThrow{};void*operator new(unsigned,NoThrow)throw();
struct Primary{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();u8 pad[0x31c];};
struct Secondary{virtual void secondary();};
struct Base_00137F88:Primary,Secondary{u8 pad[0x12c];Base_00137F88(void*);};
struct Derived_006EB520:Base_00137F88{Derived_006EB520(void*p):Base_00137F88(p){}};
Derived_006EB520*target(void*p){return new((NoThrow()))Derived_006EB520(p);}
