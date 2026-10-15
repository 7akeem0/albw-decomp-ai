#include "range.h"
struct NoThrow_6038F0{};void*operator new(unsigned int,NoThrow_6038F0)throw();
// Original native constructor at 0x001A2054.
struct C_001A2054{char data[4672];C_001A2054(void*);};
C_001A2054*f_6038F0(void*p){return new((NoThrow_6038F0()))C_001A2054(p);}
