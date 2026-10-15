#include "en218.h"
struct Hit {char p[0x24];u8 m24;};
s32 func_002189B8(EnA*o,s32 a,const Hit*h){StateA& sm=o->state;if(h->m24==11||a==3||(u8)a==30||((u8)a>=14&&(u8)a<=17)){sm.func_0065DC84(3);return 0;}return a;}

