#include "range.h"
struct NoThrow_603640{};void*operator new(unsigned int,NoThrow_603640)throw();
// Original native constructor at 0x00186CB4.
struct C_00186CB4{char data[2576];C_00186CB4(void*);};
C_00186CB4*f_603640(void*p){return new((NoThrow_603640()))C_00186CB4(p);}
