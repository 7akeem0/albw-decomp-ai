#include "range.h"
struct NoThrow_608658{};void*operator new(unsigned int,NoThrow_608658)throw();
// Original native constructor at 0x0033711C.
struct C_0033711C{char data[1168];C_0033711C(void*);};
C_0033711C*f_608658(void*p){return new((NoThrow_608658()))C_0033711C(p);}
