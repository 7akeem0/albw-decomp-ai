#include "range.h"
struct S {char pad[0x15];u8 a;char gap[1];s8 b;char gap2[8];u16 flags;void init(s8 z){a=1;flags|=1;b=z;}};
void f_00414BF8(S* p){p->init(0);}
