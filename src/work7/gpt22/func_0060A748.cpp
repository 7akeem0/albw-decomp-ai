#include "range.h"
// allocation0010BAB4 constructor004D1E9C
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004D1E9C{u8 data[0x568];Object_004D1E9C(void*);};Object_004D1E9C* target(void* arg){return new((NoThrow())) Object_004D1E9C(arg);}
