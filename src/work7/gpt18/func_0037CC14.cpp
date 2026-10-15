#include "range.h"
struct Obj37CC{char pad[0x480];u32 state;};
extern "C" void func_004ECF6C(Obj37CC*,u32);
void func_0037CC14(Obj37CC*p,u32 n){if(n<14){p->state=n;func_004ECF6C(p,n);}}
