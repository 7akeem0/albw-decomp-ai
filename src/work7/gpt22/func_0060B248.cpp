#include "range.h"
// allocation0010BAB4 constructor005094E0
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_005094E0{u8 data[0x538];Object_005094E0(void*);};Object_005094E0* target(void* arg){return new((NoThrow())) Object_005094E0(arg);}
