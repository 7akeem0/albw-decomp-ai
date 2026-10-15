#include "range.h"
struct S2AA {u32 x;};struct O2AA {u8 p[0x584];void* child;u8 q[0x5c0-0x588];S2AA sub;};
extern "C" void func_00151148(void*,bool);
extern "C" void func_00392ACC(S2AA*);
extern "C" void func_00392AAC(O2AA*p){func_00151148(p->child,false);func_00392ACC(&p->sub);}
