#include "range.h"
// allocation0010BAB4 constructor004E8B98
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004E8B98{u8 data[0x518];Object_004E8B98(void*);};Object_004E8B98* target(void* arg){return new((NoThrow())) Object_004E8B98(arg);}
