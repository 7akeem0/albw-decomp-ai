#include "range.h"
struct NoThrow_608214{};void*operator new(unsigned int,NoThrow_608214)throw();
// Original native constructor at 0x0032DB20.
struct C_0032DB20{char data[3232];C_0032DB20(void*);};
C_0032DB20*f_608214(void*p){return new((NoThrow_608214()))C_0032DB20(p);}
