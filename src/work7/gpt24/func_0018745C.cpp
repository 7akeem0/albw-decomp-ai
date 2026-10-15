#include "range.h"
struct Object1874 {char pad[0x3a0];void*owner;char pad3a4[0x6b8-0x3a4];void*child;};
struct Message1874;
extern bool func_0034C8F0(void*,void*,const Message1874*);
extern bool func_00187F18(Object1874*,const Message1874*);
bool target(Object1874*p,const Message1874*n){const Message1874*a=n;func_0034C8F0(p->child,p->owner,a);func_00187F18(p,a);return true;}
