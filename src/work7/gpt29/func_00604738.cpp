#include "range.h"
struct NoThrow_604738{};void*operator new(unsigned int,NoThrow_604738)throw();
// Original native constructor at 0x001E7B4C.
struct C_001E7B4C{char data[2784];C_001E7B4C(void*);};
C_001E7B4C*f_604738(void*p){return new((NoThrow_604738()))C_001E7B4C(p);}
