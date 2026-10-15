#include "range.h"
struct NoThrow_6083B0{};void*operator new(unsigned int,NoThrow_6083B0)throw();
// Original native constructor at 0x003313C4.
struct C_003313C4{char data[1044];C_003313C4(void*);};
C_003313C4*f_6083B0(void*p){return new((NoThrow_6083B0()))C_003313C4(p);}
