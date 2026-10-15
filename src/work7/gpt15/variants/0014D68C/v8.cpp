#include "../../range.h"
struct Child{u8 pad[13];u8 a,b;void setB(u8 v){b=v;}};struct S{u8 pad[0x44];Child*child;};extern void func_00484648(Child*,void*);void func_0014D68C(S*p,void*arg){if(p->child&&!p->child->a&&!p->child->b){func_00484648(p->child,arg);p->child->setB(1);}}

