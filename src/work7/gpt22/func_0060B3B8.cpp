#include "range.h"
// allocation0010BAB4 constructor0050F5CC
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_0050F5CC{u8 data[0xa1c];Object_0050F5CC(void*);};Object_0050F5CC* target(void* arg){return new((NoThrow())) Object_0050F5CC(arg);}
