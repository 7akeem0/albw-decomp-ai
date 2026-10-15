#include "range.h"
// allocation0010BAB4 constructor0050B78C
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_0050B78C{u8 data[0x484];Object_0050B78C(void*);};Object_0050B78C* target(void* arg){return new((NoThrow())) Object_0050B78C(arg);}
