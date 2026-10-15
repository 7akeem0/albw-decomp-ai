#include "range.h"
struct NoThrow_606958{};void*operator new(unsigned int,NoThrow_606958)throw();
// Original native constructor at 0x002BABF4.
struct C_002BABF4{char data[5356];C_002BABF4(void*);};
C_002BABF4*f_606958(void*p){return new((NoThrow_606958()))C_002BABF4(p);}
