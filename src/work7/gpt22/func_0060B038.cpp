#include "range.h"
// allocation0010BAB4 constructor004FE5CC
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004FE5CC{u8 data[0x8f4];Object_004FE5CC(void*);};Object_004FE5CC* target(void* arg){return new((NoThrow())) Object_004FE5CC(arg);}
