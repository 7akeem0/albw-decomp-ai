#include "range.h"
struct NoThrow_606478{};void*operator new(unsigned int,NoThrow_606478)throw();
// Original native constructor at 0x002898AC.
struct C_002898AC{char data[1160];C_002898AC(void*);};
C_002898AC*f_606478(void*p){return new((NoThrow_606478()))C_002898AC(p);}
