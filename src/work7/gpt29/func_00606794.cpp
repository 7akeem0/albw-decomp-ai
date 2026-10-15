#include "range.h"
struct NoThrow_606794{};void*operator new(unsigned int,NoThrow_606794)throw();
// Original native constructor at 0x0029F49C.
struct C_0029F49C{char data[1108];C_0029F49C(void*);};
C_0029F49C*f_606794(void*p){return new((NoThrow_606794()))C_0029F49C(p);}
