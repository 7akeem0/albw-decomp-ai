#include "range.h"
struct NoThrow_605504{};void*operator new(unsigned int,NoThrow_605504)throw();
// Original native constructor at 0x0024BBD8.
struct C_0024BBD8{char data[1052];C_0024BBD8(void*);};
C_0024BBD8*f_605504(void*p){return new((NoThrow_605504()))C_0024BBD8(p);}
