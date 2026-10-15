#include "range.h"
struct NoThrow_603C90{};void*operator new(unsigned int,NoThrow_603C90)throw();
// Original native constructor at 0x001BD460.
struct C_001BD460{char data[1136];C_001BD460(void*);};
C_001BD460*f_603C90(void*p){return new((NoThrow_603C90()))C_001BD460(p);}
