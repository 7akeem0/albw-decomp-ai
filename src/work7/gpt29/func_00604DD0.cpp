#include "range.h"
struct NoThrow_604DD0{};void*operator new(unsigned int,NoThrow_604DD0)throw();
// Original native constructor at 0x0023F1E4.
struct C_0023F1E4{char data[1232];C_0023F1E4(void*);};
C_0023F1E4*f_604DD0(void*p){return new((NoThrow_604DD0()))C_0023F1E4(p);}
