#include "range.h"
// allocation 0010BAB4 (no-throw tag); constructor 005127AC
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_005127AC{u8 data[0x550];Object_005127AC(void*);};Object_005127AC* target(void* arg){return new((NoThrow())) Object_005127AC(arg);}
