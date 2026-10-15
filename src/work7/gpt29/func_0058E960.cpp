#include "range.h"
struct Primary58E9{virtual~Primary58E9();virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();};
struct Disposer58E9{virtual~Disposer58E9();char pad4[0xc];};
struct Derived58E9:Primary58E9,Disposer58E9{virtual~Derived58E9();void finalize(){};};
Derived58E9::~Derived58E9(){finalize();}
