#include "range.h"
struct NoThrow_602AF8{};void*operator new(unsigned int,NoThrow_602AF8)throw();
// Original native constructor at 0x0013AB5C.
struct C_0013AB5C{char data[1120];C_0013AB5C(void*);};
C_0013AB5C*f_602AF8(void*p){return new((NoThrow_602AF8()))C_0013AB5C(p);}
