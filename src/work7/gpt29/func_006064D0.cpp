#include "range.h"
struct NoThrow_6064D0{};void*operator new(unsigned int,NoThrow_6064D0)throw();
// Original native constructor at 0x0028BAD0.
struct C_0028BAD0{char data[1368];C_0028BAD0(void*);};
C_0028BAD0*f_6064D0(void*p){return new((NoThrow_6064D0()))C_0028BAD0(p);}
