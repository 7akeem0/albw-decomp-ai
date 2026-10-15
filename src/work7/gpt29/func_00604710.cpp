#include "range.h"
struct NoThrow_604710{};void*operator new(unsigned int,NoThrow_604710)throw();
// Original native constructor at 0x001E70EC.
struct C_001E70EC{char data[2800];C_001E70EC(void*);};
C_001E70EC*f_604710(void*p){return new((NoThrow_604710()))C_001E70EC(p);}
