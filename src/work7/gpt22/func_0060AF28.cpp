#include "range.h"
// allocation0010BAB4 constructor004E9234
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004E9234{u8 data[0x55c];Object_004E9234(void*);};Object_004E9234* target(void* arg){return new((NoThrow())) Object_004E9234(arg);}
