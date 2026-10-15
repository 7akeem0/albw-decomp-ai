#include "range.h"
u32 kind(const Arg1A99*a){return(a->flags&0x7e0)>>5;}
bool f18C364(Obj18C*p,const Arg1A99*a){p->flag=kind(a)==12;return true;}
