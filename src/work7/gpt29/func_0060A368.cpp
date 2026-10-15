#include "range.h"
struct NoThrow60A3{};void* operator new(u32,NoThrow60A3)throw();
struct Base367A18 { virtual void v0(); char data[0x93c]; Base367A18(void*); };
struct Derived60A3:Base367A18 { virtual void v0(); Derived60A3(void* p):Base367A18(p){} };
Derived60A3* f_0060A368(void* p){return new((NoThrow60A3()))Derived60A3(p);}
