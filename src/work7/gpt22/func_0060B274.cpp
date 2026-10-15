#include "range.h"
// allocation0010BAB4 constructor0050AC74
struct NoThrow{};void* operator new(unsigned,NoThrow) throw();struct Object_0050AC74{u8 data[0x47c];Object_0050AC74(void*);};Object_0050AC74* target(void* arg){return new((NoThrow())) Object_0050AC74(arg);}
