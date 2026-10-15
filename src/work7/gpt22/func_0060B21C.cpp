#include "range.h"
// allocation0010BAB4 constructor0050761C
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_0050761C{u8 data[0x66c];Object_0050761C(void*);};Object_0050761C* target(void* arg){return new((NoThrow())) Object_0050761C(arg);}
