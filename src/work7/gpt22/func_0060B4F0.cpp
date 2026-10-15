#include "range.h"
// allocation0010BAB4 constructor00511624
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_00511624{u8 data[0x4ac];Object_00511624(void*);};Object_00511624* target(void* arg){return new((NoThrow())) Object_00511624(arg);}
