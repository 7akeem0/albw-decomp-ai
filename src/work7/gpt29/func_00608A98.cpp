#include "range.h"
struct NoThrow_608A98{};void*operator new(unsigned int,NoThrow_608A98)throw();
// Original native constructor at 0x00356E8C.
struct C_00356E8C{char data[2988];C_00356E8C(void*);};
C_00356E8C*f_608A98(void*p){return new((NoThrow_608A98()))C_00356E8C(p);}
