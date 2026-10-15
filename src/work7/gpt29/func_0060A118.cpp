#include "range.h"
struct NoThrow_60A118{};void*operator new(unsigned int,NoThrow_60A118)throw();
// Original native constructor at 0x003AE090.
struct C_003AE090{char data[1116];C_003AE090(void*);};
C_003AE090*f_60A118(void*p){return new((NoThrow_60A118()))C_003AE090(p);}
