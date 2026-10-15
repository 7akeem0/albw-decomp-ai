#include "range.h"
struct NoThrow_60673C{};void*operator new(unsigned int,NoThrow_60673C)throw();
// Original native constructor at 0x0029EEB8.
struct C_0029EEB8{char data[1064];C_0029EEB8(void*);};
C_0029EEB8*f_60673C(void*p){return new((NoThrow_60673C()))C_0029EEB8(p);}
