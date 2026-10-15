#include "range.h"
struct NoThrow_605670{};void*operator new(unsigned int,NoThrow_605670)throw();
// Original native constructor at 0x002543D0.
struct C_002543D0{char data[2076];C_002543D0(void*);};
C_002543D0*f_605670(void*p){return new((NoThrow_605670()))C_002543D0(p);}
