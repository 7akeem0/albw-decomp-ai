#include "range.h"
// allocation 0010BAB4 (no-throw tag); constructor 004F3DBC
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004F3DBC{u8 data[0x960];Object_004F3DBC(void*);};Object_004F3DBC* target(void* arg){return new((NoThrow())) Object_004F3DBC(arg);}
