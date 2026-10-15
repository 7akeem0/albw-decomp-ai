#include "range.h"
struct NoThrow_603998{};void*operator new(unsigned int,NoThrow_603998)throw();
// Original native constructor at 0x001A82F8.
struct C_001A82F8{char data[2416];C_001A82F8(void*);};
C_001A82F8*f_603998(void*p){return new((NoThrow_603998()))C_001A82F8(p);}
