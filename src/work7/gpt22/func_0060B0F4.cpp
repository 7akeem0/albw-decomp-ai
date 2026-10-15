#include "range.h"
// allocation0010BAB4 constructor0050109C
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_0050109C{u8 data[0x8f4];Object_0050109C(void*);};Object_0050109C* target(void* arg){return new((NoThrow())) Object_0050109C(arg);}
