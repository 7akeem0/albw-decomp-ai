#include "range.h"
struct NoThrow_609F10{};void*operator new(unsigned int,NoThrow_609F10)throw();
// Original native constructor at 0x003A035C.
struct C_003A035C{char data[848];C_003A035C(void*);};
C_003A035C*f_609F10(void*p){return new((NoThrow_609F10()))C_003A035C(p);}
