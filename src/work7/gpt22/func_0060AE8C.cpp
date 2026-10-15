#include "range.h"
// Primary virtual layout inferred from secondary vtable offset 78.
// Original vtable 006ED408, constructor 001D2BC4, allocation0010BAB4.
struct NoThrow{};void*operator new(unsigned,NoThrow)throw();
struct Primary{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void v25();virtual void v26();virtual void v27();u8 pad[0x31c];};
struct Secondary{virtual void secondary();};
struct Base_001D2BC4:Primary,Secondary{u8 pad[0x31c];Base_001D2BC4(void*);};
struct Derived_006ED408:Base_001D2BC4{Derived_006ED408(void*p):Base_001D2BC4(p){}};
Derived_006ED408*target(void*p){return new((NoThrow()))Derived_006ED408(p);}
