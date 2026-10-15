#include "range.h"
struct NoThrow_603694{};void*operator new(unsigned int,NoThrow_603694)throw();
// Original native constructor at 0x0018FBA8.
struct C_0018FBA8{char data[1408];C_0018FBA8(void*);};
C_0018FBA8*f_603694(void*p){return new((NoThrow_603694()))C_0018FBA8(p);}
