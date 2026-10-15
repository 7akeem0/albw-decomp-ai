#include "range.h"
struct NoThrow6093{};void* operator new(u32,NoThrow6093)throw();
struct Base4ED00C { virtual void v0(); char data[0x31c]; Base4ED00C(void*); };
struct Derived6093:Base4ED00C { virtual void v0(); Derived6093(void* p):Base4ED00C(p){} };
Derived6093* f_006093F8(void* p){return new((NoThrow6093()))Derived6093(p);}
