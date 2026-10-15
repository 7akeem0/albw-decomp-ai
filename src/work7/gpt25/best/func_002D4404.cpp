#include "../range_types.h"
struct Obj2D4404{u32 value;u8 mode;s8 tag;};
void tag2D4404(Obj2D4404*p,s32 mode){s32 tag=mode? -1:0;if(mode==0||mode==1){}else if(mode==2)tag=8;else return;p->tag=tag;}
extern "C" void f_002D4404(Obj2D4404*p,u32 value,s32 mode){tag2D4404(p,mode);p->value=value;p->mode=mode;}
