#include "range.h"
struct NoThrow_603944{};void*operator new(unsigned int,NoThrow_603944)throw();
// Original native constructor at 0x001A4BF0.
struct C_001A4BF0{char data[2304];C_001A4BF0(void*);};
C_001A4BF0*f_603944(void*p){return new((NoThrow_603944()))C_001A4BF0(p);}
