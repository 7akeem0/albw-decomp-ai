#include "range.h"
// allocation 0010BAB4 (no-throw tag); constructor 005164EC
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_005164EC{u8 data[0x480];Object_005164EC(void*);};Object_005164EC* target(void* arg){return new((NoThrow())) Object_005164EC(arg);}
