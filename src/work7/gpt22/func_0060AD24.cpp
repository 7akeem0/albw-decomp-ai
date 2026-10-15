#include "range.h"
// allocation0010BAB4 constructor004DD410
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004DD410{u8 data[0x9cc];Object_004DD410(void*);};Object_004DD410* target(void* arg){return new((NoThrow())) Object_004DD410(arg);}
