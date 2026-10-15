#include "range.h"
// allocation 0010BAB4 (no-throw tag); constructor 004DFBCC
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004DFBCC{u8 data[0x9f0];Object_004DFBCC(void*);};Object_004DFBCC* target(void* arg){return new((NoThrow())) Object_004DFBCC(arg);}
