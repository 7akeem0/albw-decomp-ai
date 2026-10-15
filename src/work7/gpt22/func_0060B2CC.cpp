#include "range.h"
// allocation 0010BAB4 (no-throw tag); constructor 0050C740
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_0050C740{u8 data[0x4b0];Object_0050C740(void*);};Object_0050C740* target(void* arg){return new((NoThrow())) Object_0050C740(arg);}
