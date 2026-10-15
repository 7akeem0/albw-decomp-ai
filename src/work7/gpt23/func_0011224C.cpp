#include "range.h"
extern "C" void func_00111EF0(IntrusiveList*,ListNode*);extern "C" void func_00112274(ListOwner112*,ListItem112*);
extern "C" void func_0011224C(ListOwner112*p,ListItem112*q){ListItem112*b=q;IntrusiveList*a=&p->list;ListNode*n=&b->node;func_00111EF0(a,n);func_00112274(p,b);}
