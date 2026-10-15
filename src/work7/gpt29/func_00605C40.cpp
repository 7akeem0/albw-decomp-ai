#include "range.h"
struct NoThrow_605C40{};void*operator new(unsigned int,NoThrow_605C40)throw();
// Original native constructor at 0x0027E0C8.
struct C_0027E0C8{char data[1044];C_0027E0C8(void*);};
C_0027E0C8*f_605C40(void*p){return new((NoThrow_605C40()))C_0027E0C8(p);}
