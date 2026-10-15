#include "range.h"
struct NoThrow_6090B4{};void*operator new(unsigned int,NoThrow_6090B4)throw();
// Original native constructor at 0x00370E98.
struct C_00370E98{char data[2348];C_00370E98(void*);};
C_00370E98*f_6090B4(void*p){return new((NoThrow_6090B4()))C_00370E98(p);}
