#include "range.h"
// allocation0010BAB4 constructor004D1114
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004D1114{u8 data[0x4b8];Object_004D1114(void*);};Object_004D1114* target(void* arg){return new((NoThrow())) Object_004D1114(arg);}
