#include "range.h"
// allocation0010BAB4 constructor004C1E5C
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004C1E5C{u8 data[0x98c];Object_004C1E5C(void*);};Object_004C1E5C* target(void* arg){return new((NoThrow())) Object_004C1E5C(arg);}
