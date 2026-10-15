#include "range.h"
void phase(Obj20B93*p,u32 n,u8 z){if(n!=33&&n!=34&&n!=35){p->values[0]=z;p->values[1]=z;p->values[2]=z;p->values[3]=z;p->values[4]=z;p->values[5]=z;}p->flag=z;}
void f_0020B930(Obj20B93*p,u32 n){p->velocity.z=0;p->velocity.x=0;phase(p,n,0);}
