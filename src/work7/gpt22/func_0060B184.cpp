#include "range.h"
// allocation 0010BAB4 (no-throw tag); constructor 00505B6C
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_00505B6C{u8 data[0x430];Object_00505B6C(void*);};Object_00505B6C* target(void* arg){return new((NoThrow())) Object_00505B6C(arg);}
