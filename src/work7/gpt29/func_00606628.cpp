#include "range.h"
struct NoThrow_606628{};void*operator new(unsigned int,NoThrow_606628)throw();
// Original native constructor at 0x0029ABC0.
struct C_0029ABC0{char data[1124];C_0029ABC0(void*);};
C_0029ABC0*f_606628(void*p){return new((NoThrow_606628()))C_0029ABC0(p);}
