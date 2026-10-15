#include "range.h"
struct Obj48C59{u8 pad[0x5c];void*child;};extern "C" void*func_0057DE78(void*,void*);
bool func_0048C590(Obj48C59*p,bool*out,void*a){void*c=func_0057DE78(p,a);p->child=c;*out=c!=0;return true;}
