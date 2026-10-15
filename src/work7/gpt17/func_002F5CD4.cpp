#include "range.h"
struct Obj {u8 pad[0xc94];u32 a,b;};
struct Game {u8 pad[0x3dbbc];u32 actors;};extern Game*data_00706E20;
extern void*func_0052FBA0(u32*,u32);
void*f_002F5CD4(Obj*p,s32 i){u32 h=0;if(i==0)h=p->a;else if(i==1)h=p->b;return func_0052FBA0(&data_00706E20->actors,h);}
