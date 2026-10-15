#include "range.h"
struct G{u8 a,active;u16 b;u32 c;void*child;};extern G data_007158E8;extern u32 func_0010C210(void*);u32 f(){G*g=&data_007158E8;u32 r=0;if(g->active){r=func_0010C210(g->child);g->active=0;}return r;}
