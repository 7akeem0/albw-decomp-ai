#include "range.h"
// allocation0010BAB4 constructor004C33C8
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004C33C8{u8 data[0x5d4];Object_004C33C8(void*);};Object_004C33C8* target(void* arg){return new((NoThrow())) Object_004C33C8(arg);}
