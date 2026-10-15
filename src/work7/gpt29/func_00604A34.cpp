#include "range.h"
struct NoThrow_604A34{};void*operator new(unsigned int,NoThrow_604A34)throw();
// Original native constructor at 0x0021D408.
struct C_0021D408{char data[2352];C_0021D408(void*);};
C_0021D408*f_604A34(void*p){return new((NoThrow_604A34()))C_0021D408(p);}
