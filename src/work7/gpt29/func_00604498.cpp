#include "range.h"
struct NoThrow_604498{};void*operator new(unsigned int,NoThrow_604498)throw();
// Original native constructor at 0x001D42A8.
struct C_001D42A8{char data[1168];C_001D42A8(void*);};
C_001D42A8*f_604498(void*p){return new((NoThrow_604498()))C_001D42A8(p);}
