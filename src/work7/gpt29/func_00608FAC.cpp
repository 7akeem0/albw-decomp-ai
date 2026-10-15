#include "range.h"
struct NoThrow_608FAC{};void*operator new(unsigned int,NoThrow_608FAC)throw();
// Original native constructor at 0x00367A18.
struct C_00367A18{char data[2368];C_00367A18(void*);};
C_00367A18*f_608FAC(void*p){return new((NoThrow_608FAC()))C_00367A18(p);}
