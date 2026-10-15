#include "range.h"
struct NoThrow{};void*operator new(unsigned,NoThrow)throw();struct Base{virtual void v();u8 pad[0x7c0];Base(void*);};struct D:Base{D(void*a):Base(a){}virtual void v();};D*target(void*a){return new((NoThrow()))D(a);}
// Base constructor0037A860, D vtable006EA728.
