#include "range.h"
struct NoThrow_6085C4{};void*operator new(unsigned int,NoThrow_6085C4)throw();
// Original native constructor at 0x00334B70.
struct C_00334B70{char data[1128];C_00334B70(void*);};
C_00334B70*f_6085C4(void*p){return new((NoThrow_6085C4()))C_00334B70(p);}
