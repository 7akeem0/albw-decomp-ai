#include "range.h"
// allocation 0010BAB4 (no-throw tag); constructor 004E912C
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004E912C{u8 data[0x480];Object_004E912C(void*);};Object_004E912C* target(void* arg){return new((NoThrow())) Object_004E912C(arg);}
