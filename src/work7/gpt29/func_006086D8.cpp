#include "range.h"
struct NoThrow_6086D8{};void*operator new(unsigned int,NoThrow_6086D8)throw();
// Original native constructor at 0x00339324.
struct C_00339324{char data[1236];C_00339324(void*);};
C_00339324*f_6086D8(void*p){return new((NoThrow_6086D8()))C_00339324(p);}
