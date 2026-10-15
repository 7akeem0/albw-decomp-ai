#include "range.h"
// allocation 0010BAB4 (no-throw tag); constructor 004E5710
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004E5710{u8 data[0x6d0];Object_004E5710(void*);};Object_004E5710* target(void* arg){return new((NoThrow())) Object_004E5710(arg);}
