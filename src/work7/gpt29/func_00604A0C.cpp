#include "range.h"
struct NoThrow_604A0C{};void*operator new(unsigned int,NoThrow_604A0C)throw();
// Original native constructor at 0x0021C400.
struct C_0021C400{char data[4992];C_0021C400(void*);};
C_0021C400*f_604A0C(void*p){return new((NoThrow_604A0C()))C_0021C400(p);}
