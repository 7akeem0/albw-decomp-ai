#include "range.h"
struct NoThrow_603D3C{};void*operator new(unsigned int,NoThrow_603D3C)throw();
// Original native constructor at 0x001C0428.
struct C_001C0428{char data[1232];C_001C0428(void*);};
C_001C0428*f_603D3C(void*p){return new((NoThrow_603D3C()))C_001C0428(p);}
