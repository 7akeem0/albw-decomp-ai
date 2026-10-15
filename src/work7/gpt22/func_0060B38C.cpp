#include "range.h"
// allocation0010BAB4 constructor0050DD68
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_0050DD68{u8 data[0x98c];Object_0050DD68(void*);};Object_0050DD68* target(void* arg){return new((NoThrow())) Object_0050DD68(arg);}
