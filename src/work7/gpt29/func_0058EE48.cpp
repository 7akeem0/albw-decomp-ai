#include "range.h"
struct Primary58EE{virtual~Primary58EE();virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();char pad4[0x34];};
struct Secondary58EE{virtual~Secondary58EE();char pad4[0x5c];};
struct Base58EE:Primary58EE,Secondary58EE{virtual~Base58EE();};
struct Derived58EE:Base58EE{Base58EE member;void finalize(){}virtual~Derived58EE();};
Derived58EE::~Derived58EE(){finalize();}
