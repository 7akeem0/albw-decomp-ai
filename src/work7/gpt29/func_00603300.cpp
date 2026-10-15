#include "range.h"
struct NoThrow_603300{};void*operator new(unsigned int,NoThrow_603300)throw();
// Original native constructor at 0x001739B0.
struct C_001739B0{char data[1216];C_001739B0(void*);};
C_001739B0*f_603300(void*p){return new((NoThrow_603300()))C_001739B0(p);}
