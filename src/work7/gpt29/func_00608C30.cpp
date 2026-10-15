#include "range.h"
struct NoThrow_608C30{};void*operator new(unsigned int,NoThrow_608C30)throw();
// Original native constructor at 0x0035B338.
struct C_0035B338{char data[1092];C_0035B338(void*);};
C_0035B338*f_608C30(void*p){return new((NoThrow_608C30()))C_0035B338(p);}
