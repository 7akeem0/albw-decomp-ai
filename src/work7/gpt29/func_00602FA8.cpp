#include "range.h"
struct NoThrow_602FA8{};void*operator new(unsigned int,NoThrow_602FA8)throw();
// Original native constructor at 0x00148C18.
struct C_00148C18{char data[1840];C_00148C18(void*);};
C_00148C18*f_602FA8(void*p){return new((NoThrow_602FA8()))C_00148C18(p);}
