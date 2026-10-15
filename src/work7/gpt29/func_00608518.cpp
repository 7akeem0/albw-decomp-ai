#include "range.h"
struct NoThrow_608518{};void*operator new(unsigned int,NoThrow_608518)throw();
// Original native constructor at 0x00333C10.
struct C_00333C10{char data[1268];C_00333C10(void*);};
C_00333C10*f_608518(void*p){return new((NoThrow_608518()))C_00333C10(p);}
