#include "range.h"
struct NoThrow_6030D4{};void*operator new(unsigned int,NoThrow_6030D4)throw();
// Original native constructor at 0x00159374.
struct C_00159374{char data[2368];C_00159374(void*);};
C_00159374*f_6030D4(void*p){return new((NoThrow_6030D4()))C_00159374(p);}
