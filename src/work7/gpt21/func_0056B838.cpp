#include "range.h"
u32 f(const u16*p){u32 v=*p;if(v){v-=0x220c;if(v==0||v==1)return v;}return 2;}
