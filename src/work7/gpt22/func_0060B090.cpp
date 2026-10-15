#include "range.h"
// allocation0010BAB4 constructor00500540
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_00500540{u8 data[0x934];Object_00500540(void*);};Object_00500540* target(void* arg){return new((NoThrow())) Object_00500540(arg);}
