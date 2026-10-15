#include "range.h"
struct NoThrow_608AF0{};void*operator new(unsigned int,NoThrow_608AF0)throw();
// Original native constructor at 0x0035A0AC.
struct C_0035A0AC{char data[1608];C_0035A0AC(void*);};
C_0035A0AC*f_608AF0(void*p){return new((NoThrow_608AF0()))C_0035A0AC(p);}
