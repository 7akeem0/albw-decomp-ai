#include "range.h"
void set(NpcControl22*p,u8 v){p->state988=v;}void target(NpcControl22*p){set(p,2);if(p->state858==1)return;if(p->gate85f)return;p->request(p->id853,-1);}
