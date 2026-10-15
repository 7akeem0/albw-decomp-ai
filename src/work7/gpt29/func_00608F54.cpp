#include "range.h"
struct NoThrow_608F54{};void*operator new(unsigned int,NoThrow_608F54)throw();
// Original native constructor at 0x0035E484.
struct C_0035E484{char data[1112];C_0035E484(void*);};
C_0035E484*f_608F54(void*p){return new((NoThrow_608F54()))C_0035E484(p);}
