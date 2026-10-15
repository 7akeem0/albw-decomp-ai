#include "range.h"
struct NoThrow_608970{};void*operator new(unsigned int,NoThrow_608970)throw();
// Original native constructor at 0x0033E710.
struct C_0033E710{char data[1116];C_0033E710(void*);};
C_0033E710*f_608970(void*p){return new((NoThrow_608970()))C_0033E710(p);}
