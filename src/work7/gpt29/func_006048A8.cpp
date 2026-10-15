#include "range.h"
struct NoThrow_6048A8{};void*operator new(unsigned int,NoThrow_6048A8)throw();
// Original native constructor at 0x00216CDC.
struct C_00216CDC{char data[2896];C_00216CDC(void*);};
C_00216CDC*f_6048A8(void*p){return new((NoThrow_6048A8()))C_00216CDC(p);}
