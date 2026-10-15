#include "range.h"
// allocation0010BAB4 constructor004DAC4C
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004DAC4C{u8 data[0x9c8];Object_004DAC4C(void*);};Object_004DAC4C* target(void* arg){return new((NoThrow())) Object_004DAC4C(arg);}
