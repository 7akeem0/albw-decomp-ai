#include "range.h"
struct NoThrow_6084EC{};void*operator new(unsigned int,NoThrow_6084EC)throw();
// Original native constructor at 0x00333984.
struct C_00333984{char data[1268];C_00333984(void*);};
C_00333984*f_6084EC(void*p){return new((NoThrow_6084EC()))C_00333984(p);}
