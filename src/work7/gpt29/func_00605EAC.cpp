#include "range.h"
struct NoThrow_605EAC{};void*operator new(unsigned int,NoThrow_605EAC)throw();
// Original native constructor at 0x00282040.
struct C_00282040{char data[2532];C_00282040(void*);};
C_00282040*f_605EAC(void*p){return new((NoThrow_605EAC()))C_00282040(p);}
