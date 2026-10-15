#include "range.h"
// allocation0010BAB4 constructor004E3780
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004E3780{u8 data[0x55c];Object_004E3780(void*);};Object_004E3780* target(void* arg){return new((NoThrow())) Object_004E3780(arg);}
