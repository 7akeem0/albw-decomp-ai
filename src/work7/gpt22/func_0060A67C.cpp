#include "range.h"
// allocation0010BAB4 constructor004CC35C
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004CC35C{u8 data[0x9d4];Object_004CC35C(void*);};Object_004CC35C* target(void* arg){return new((NoThrow())) Object_004CC35C(arg);}
