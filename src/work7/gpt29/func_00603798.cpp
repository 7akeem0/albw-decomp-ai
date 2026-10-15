#include "range.h"
struct NoThrow_603798{};void*operator new(unsigned int,NoThrow_603798)throw();
// Original native constructor at 0x00194EF8.
struct C_00194EF8{char data[1232];C_00194EF8(void*);};
C_00194EF8*f_603798(void*p){return new((NoThrow_603798()))C_00194EF8(p);}
