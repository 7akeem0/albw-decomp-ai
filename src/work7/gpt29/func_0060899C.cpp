#include "range.h"
struct NoThrow_60899C{};void*operator new(unsigned int,NoThrow_60899C)throw();
// Original native constructor at 0x0033FA2C.
struct C_0033FA2C{char data[1228];C_0033FA2C(void*);};
C_0033FA2C*f_60899C(void*p){return new((NoThrow_60899C()))C_0033FA2C(p);}
