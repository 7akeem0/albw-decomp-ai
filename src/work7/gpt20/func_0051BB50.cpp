#include "ladder_types.h"
struct Child51BB{char pad[0xd];u8 a,b;};
struct O51BB{char pad[0xf0];Child51BB* child;};
void f_0051BB50(O51BB* p){Child51BB* q=p->child;if(q->a==0&&q->b==0)q->b=1;}
