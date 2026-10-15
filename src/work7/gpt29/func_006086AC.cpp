#include "range.h"
struct NoThrow_6086AC{};void*operator new(unsigned int,NoThrow_6086AC)throw();
// Original native constructor at 0x003382D4.
struct C_003382D4{char data[1108];C_003382D4(void*);};
C_003382D4*f_6086AC(void*p){return new((NoThrow_6086AC()))C_003382D4(p);}
