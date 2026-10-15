#include "range.h"
struct NoThrow_6058EC{};void*operator new(unsigned int,NoThrow_6058EC)throw();
// Original native constructor at 0x0026AB80.
struct C_0026AB80{char data[3228];C_0026AB80(void*);};
C_0026AB80*f_6058EC(void*p){return new((NoThrow_6058EC()))C_0026AB80(p);}
