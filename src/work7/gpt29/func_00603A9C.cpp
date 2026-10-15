#include "range.h"
struct NoThrow_603A9C{};void*operator new(unsigned int,NoThrow_603A9C)throw();
// Original native constructor at 0x001B5E00.
struct C_001B5E00{char data[2592];C_001B5E00(void*);};
C_001B5E00*f_603A9C(void*p){return new((NoThrow_603A9C()))C_001B5E00(p);}
