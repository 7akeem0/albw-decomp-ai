#include "range.h"
// allocation0010BAB4 constructor0050D6C0
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_0050D6C0{u8 data[0x994];Object_0050D6C0(void*);};Object_0050D6C0* target(void* arg){return new((NoThrow())) Object_0050D6C0(arg);}
