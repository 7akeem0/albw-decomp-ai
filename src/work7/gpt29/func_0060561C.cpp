#include "range.h"
struct NoThrow_60561C{};void*operator new(unsigned int,NoThrow_60561C)throw();
// Original native constructor at 0x002519D0.
struct C_002519D0{char data[1084];C_002519D0(void*);};
C_002519D0*f_60561C(void*p){return new((NoThrow_60561C()))C_002519D0(p);}
