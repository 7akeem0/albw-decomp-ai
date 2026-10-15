#include "range.h"
struct NoThrow_608F80{};void*operator new(unsigned int,NoThrow_608F80)throw();
// Original native constructor at 0x00360C94.
struct C_00360C94{char data[1316];C_00360C94(void*);};
C_00360C94*f_608F80(void*p){return new((NoThrow_608F80()))C_00360C94(p);}
