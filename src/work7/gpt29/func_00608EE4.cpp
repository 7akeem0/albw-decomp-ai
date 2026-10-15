#include "range.h"
struct NoThrow_608EE4{};void*operator new(unsigned int,NoThrow_608EE4)throw();
// Original native constructor at 0x0035DEFC.
struct C_0035DEFC{char data[2540];C_0035DEFC(void*);};
C_0035DEFC*f_608EE4(void*p){return new((NoThrow_608EE4()))C_0035DEFC(p);}
