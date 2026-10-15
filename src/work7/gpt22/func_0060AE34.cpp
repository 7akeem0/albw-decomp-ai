#include "range.h"
// allocation0010BAB4 constructor004E7B14
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_004E7B14{u8 data[0x578];Object_004E7B14(void*);};Object_004E7B14* target(void* arg){return new((NoThrow())) Object_004E7B14(arg);}
