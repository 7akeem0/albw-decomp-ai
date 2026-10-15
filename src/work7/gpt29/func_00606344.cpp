#include "range.h"
struct NoThrow_606344{};void*operator new(unsigned int,NoThrow_606344)throw();
// Original native constructor at 0x00287098.
struct C_00287098{char data[1092];C_00287098(void*);};
C_00287098*f_606344(void*p){return new((NoThrow_606344()))C_00287098(p);}
