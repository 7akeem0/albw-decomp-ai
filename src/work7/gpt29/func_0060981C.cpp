#include "range.h"
struct NoThrow_60981C{};void*operator new(unsigned int,NoThrow_60981C)throw();
// Original native constructor at 0x00388654.
struct C_00388654{char data[2576];C_00388654(void*);};
C_00388654*f_60981C(void*p){return new((NoThrow_60981C()))C_00388654(p);}
