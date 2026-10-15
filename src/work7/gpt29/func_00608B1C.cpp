#include "range.h"
struct NoThrow_608B1C{};void*operator new(unsigned int,NoThrow_608B1C)throw();
// Original native constructor at 0x0035A3B8.
struct C_0035A3B8{char data[1048];C_0035A3B8(void*);};
C_0035A3B8*f_608B1C(void*p){return new((NoThrow_608B1C()))C_0035A3B8(p);}
