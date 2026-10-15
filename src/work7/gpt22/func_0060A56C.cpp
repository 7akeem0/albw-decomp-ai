#include "range.h"
// Primary virtual layout inferred from secondary vtable offset BC.
// Original vtable 006EB690, constructor 0017AC58, allocation0010BAB4.
struct NoThrow{};void*operator new(unsigned,NoThrow)throw();
struct Primary{virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void v25();virtual void v26();virtual void v27();virtual void v28();virtual void v29();virtual void v30();virtual void v31();virtual void v32();virtual void v33();virtual void v34();virtual void v35();virtual void v36();virtual void v37();virtual void v38();virtual void v39();virtual void v40();virtual void v41();virtual void v42();virtual void v43();virtual void v44();u8 pad[0x31c];};
struct Secondary{virtual void secondary();};
struct Base_0017AC58:Primary,Secondary{u8 pad[0x680];Base_0017AC58(void*);};
struct Derived_006EB690:Base_0017AC58{Derived_006EB690(void*p):Base_0017AC58(p){}};
Derived_006EB690*target(void*p){return new((NoThrow()))Derived_006EB690(p);}
