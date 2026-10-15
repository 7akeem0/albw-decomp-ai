#include "range.h"
struct NoThrow_607E88{};void*operator new(unsigned int,NoThrow_607E88)throw();
// Original native constructor at 0x00314BBC.
struct C_00314BBC{char data[2464];C_00314BBC(void*);};
C_00314BBC*f_607E88(void*p){return new((NoThrow_607E88()))C_00314BBC(p);}
