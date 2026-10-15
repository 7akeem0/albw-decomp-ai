#include "range.h"
// allocation0010BAB4 constructor00514DC0
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_00514DC0{u8 data[0x5d4];Object_00514DC0(void*);};Object_00514DC0* target(void* arg){return new((NoThrow())) Object_00514DC0(arg);}
