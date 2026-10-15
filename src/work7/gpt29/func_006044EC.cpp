#include "range.h"
struct NoThrow_6044EC{};void*operator new(unsigned int,NoThrow_6044EC)throw();
// Original native constructor at 0x001D941C.
struct C_001D941C{char data[1184];C_001D941C(void*);};
C_001D941C*f_6044EC(void*p){return new((NoThrow_6044EC()))C_001D941C(p);}
