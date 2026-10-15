#include "range.h"
// allocation 0010BAB4 (no-throw tag); constructor 004D8D50
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004D8D50{u8 data[0x440];Object_004D8D50(void*);};Object_004D8D50* target(void* arg){return new((NoThrow())) Object_004D8D50(arg);}
