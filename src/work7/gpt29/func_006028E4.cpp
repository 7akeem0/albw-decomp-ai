#include "range.h"
struct NoThrowTag6028{};void*operator new(unsigned int,NoThrowTag6028)throw();
struct C6028{char data[0x8f0];C6028(void*);};
C6028*f_006028E4(void*p){return new((NoThrowTag6028()))C6028(p);}
