#include "range.h"
struct NoThrow_606538{};void*operator new(unsigned int,NoThrow_606538)throw();
// Original native constructor at 0x00298B90.
struct C_00298B90{char data[1128];C_00298B90(void*);};
C_00298B90*f_606538(void*p){return new((NoThrow_606538()))C_00298B90(p);}
