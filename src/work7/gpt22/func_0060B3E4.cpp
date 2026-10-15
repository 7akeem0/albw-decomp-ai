#include "range.h"
// allocation0010BAB4 constructor0050FDAC
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_0050FDAC{u8 data[0x98c];Object_0050FDAC(void*);};Object_0050FDAC* target(void* arg){return new((NoThrow())) Object_0050FDAC(arg);}
