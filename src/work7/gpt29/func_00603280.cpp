#include "range.h"
struct NoThrow_603280{};void*operator new(unsigned int,NoThrow_603280)throw();
// Original native constructor at 0x0016F250.
struct C_0016F250{char data[800];C_0016F250(void*);};
C_0016F250*f_603280(void*p){return new((NoThrow_603280()))C_0016F250(p);}
