#include "range.h"
// Primary virtual layout inferred from secondary vtable offset 84.
// Original vtable 006EBD10, constructor 0026C850, allocation0010BAB4.
struct NoThrow{};void*operator new(unsigned,NoThrow)throw();
struct Primary{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void v25();virtual void v26();virtual void v27();virtual void v28();virtual void v29();virtual void v30();u8 pad[0x31c];};
struct Secondary{virtual void secondary();};
struct Base_0026C850:Primary,Secondary{u8 pad[0x5ec];Base_0026C850(void*);};
struct Derived_006EBD10:Base_0026C850{Derived_006EBD10(void*p):Base_0026C850(p){}};
Derived_006EBD10*target(void*p){return new((NoThrow()))Derived_006EBD10(p);}
