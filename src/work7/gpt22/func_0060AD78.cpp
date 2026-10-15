#include "range.h"
// allocation0010BAB4 constructor004E10A4
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004E10A4{u8 data[0x554];Object_004E10A4(void*);};Object_004E10A4* target(void* arg){return new((NoThrow())) Object_004E10A4(arg);}
