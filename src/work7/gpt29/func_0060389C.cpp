#include "range.h"
struct NoThrow_60389C{};void*operator new(unsigned int,NoThrow_60389C)throw();
// Original native constructor at 0x0019C724.
struct C_0019C724{char data[1136];C_0019C724(void*);};
C_0019C724*f_60389C(void*p){return new((NoThrow_60389C()))C_0019C724(p);}
