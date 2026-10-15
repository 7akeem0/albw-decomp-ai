#include "range.h"
struct NoThrow_605598{};void*operator new(unsigned int,NoThrow_605598)throw();
// Original native constructor at 0x0024EA18.
struct C_0024EA18{char data[1804];C_0024EA18(void*);};
C_0024EA18*f_605598(void*p){return new((NoThrow_605598()))C_0024EA18(p);}
