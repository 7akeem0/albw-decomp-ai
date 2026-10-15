#include "range.h"
struct NoThrow_6055C4{};void*operator new(unsigned int,NoThrow_6055C4)throw();
// Original native constructor at 0x0024F544.
struct C_0024F544{char data[1260];C_0024F544(void*);};
C_0024F544*f_6055C4(void*p){return new((NoThrow_6055C4()))C_0024F544(p);}
