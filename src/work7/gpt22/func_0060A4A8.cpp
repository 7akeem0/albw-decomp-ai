#include "range.h"
// allocation0010BAB4 constructor004BAF20
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004BAF20{u8 data[0x628];Object_004BAF20(void*);};Object_004BAF20* target(void* arg){return new((NoThrow())) Object_004BAF20(arg);}
