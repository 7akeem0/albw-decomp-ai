#include "range.h"
struct S306 {u8 pad[0x3c];};struct O306 {u8 pad[0x18];S306 sub;s32 count;};
extern "C" void func_003D30B8(S306*);
extern "C" void func_003D306C(O306*p){func_003D30B8(&p->sub);--p->count;}
