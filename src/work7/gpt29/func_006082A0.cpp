#include "range.h"
struct NoThrow_6082A0{};void*operator new(unsigned int,NoThrow_6082A0)throw();
// Original native constructor at 0x003306C0.
struct C_003306C0{char data[1608];C_003306C0(void*);};
C_003306C0*f_6082A0(void*p){return new((NoThrow_6082A0()))C_003306C0(p);}
