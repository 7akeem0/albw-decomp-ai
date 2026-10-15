#include "range.h"
struct NoThrow_6049B8{};void*operator new(unsigned int,NoThrow_6049B8)throw();
// Original native constructor at 0x00218EEC.
struct C_00218EEC{char data[2304];C_00218EEC(void*);};
C_00218EEC*f_6049B8(void*p){return new((NoThrow_6049B8()))C_00218EEC(p);}
