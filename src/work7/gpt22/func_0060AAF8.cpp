#include "range.h"
// allocation0010BAB4 constructor004D7BB8
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004D7BB8{u8 data[0x63c];Object_004D7BB8(void*);};Object_004D7BB8* target(void* arg){return new((NoThrow())) Object_004D7BB8(arg);}
