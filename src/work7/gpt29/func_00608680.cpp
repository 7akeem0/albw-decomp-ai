#include "range.h"
struct NoThrow_608680{};void*operator new(unsigned int,NoThrow_608680)throw();
// Original native constructor at 0x00337E5C.
struct C_00337E5C{char data[1944];C_00337E5C(void*);};
C_00337E5C*f_608680(void*p){return new((NoThrow_608680()))C_00337E5C(p);}
