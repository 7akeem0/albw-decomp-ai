#include "range.h"
struct NoThrow_603054{};void*operator new(unsigned int,NoThrow_603054)throw();
// Original native constructor at 0x001551C4.
struct C_001551C4{char data[2352];C_001551C4(void*);};
C_001551C4*f_603054(void*p){return new((NoThrow_603054()))C_001551C4(p);}
