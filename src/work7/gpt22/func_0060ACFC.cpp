#include "range.h"
// allocation 0010BAB4 (no-throw tag); constructor 004DC1D8
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004DC1D8{u8 data[0x9c0];Object_004DC1D8(void*);};Object_004DC1D8* target(void* arg){return new((NoThrow())) Object_004DC1D8(arg);}
