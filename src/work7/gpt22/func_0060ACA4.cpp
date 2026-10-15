#include "range.h"
// allocation0010BAB4 constructor004D9DF8
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004D9DF8{u8 data[0x98c];Object_004D9DF8(void*);};Object_004D9DF8* target(void* arg){return new((NoThrow())) Object_004D9DF8(arg);}
