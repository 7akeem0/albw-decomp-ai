#include "range.h"
// allocation0010BAB4 constructor004D9618
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004D9618{u8 data[0x7b8];Object_004D9618(void*);};Object_004D9618* target(void* arg){return new((NoThrow())) Object_004D9618(arg);}
