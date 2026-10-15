#include "range.h"
struct NoThrow_606768{};void*operator new(unsigned int,NoThrow_606768)throw();
// Original native constructor at 0x0029F124.
struct C_0029F124{char data[1064];C_0029F124(void*);};
C_0029F124*f_606768(void*p){return new((NoThrow_606768()))C_0029F124(p);}
