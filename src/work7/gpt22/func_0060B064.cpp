#include "range.h"
// allocation0010BAB4 constructor004FF57C
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004FF57C{u8 data[0x914];Object_004FF57C(void*);};Object_004FF57C* target(void* arg){return new((NoThrow())) Object_004FF57C(arg);}
