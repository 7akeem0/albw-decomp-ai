#include "range.h"
struct Obj48C5 {u8 pad[0x5c];void*child;};extern "C" void*func_0057DE78(void*,void*);extern "C" bool func_00489F08(void*,void*);
bool func_0048C5C0(Obj48C5*p,void*a){void*c=func_0057DE78(p,a);if(c){p->child=c;return func_00489F08(c,a);}return false;}
