#include "range.h"
// allocation0010BAB4 constructor004B0310
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004B0310{u8 data[0x5d8];Object_004B0310(void*);};Object_004B0310* target(void* arg){return new((NoThrow())) Object_004B0310(arg);}
