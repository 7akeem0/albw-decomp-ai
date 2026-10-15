#include "range.h"
struct NoThrow_60A0F0{};void*operator new(unsigned int,NoThrow_60A0F0)throw();
// Original native constructor at 0x003AD40C.
struct C_003AD40C{char data[1216];C_003AD40C(void*);};
C_003AD40C*f_60A0F0(void*p){return new((NoThrow_60A0F0()))C_003AD40C(p);}
