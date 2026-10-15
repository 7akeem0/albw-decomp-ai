#include "range.h"
struct NoThrow_606224{};void*operator new(unsigned int,NoThrow_606224)throw();
// Original native constructor at 0x00284F18.
struct C_00284F18{char data[2548];C_00284F18(void*);};
C_00284F18*f_606224(void*p){return new((NoThrow_606224()))C_00284F18(p);}
