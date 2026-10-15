#include "range.h"
// allocation0010BAB4 constructor00502204
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_00502204{u8 data[0xa8c];Object_00502204(void*);};Object_00502204* target(void* arg){return new((NoThrow())) Object_00502204(arg);}
