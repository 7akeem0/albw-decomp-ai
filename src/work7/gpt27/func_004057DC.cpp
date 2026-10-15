#include "range.h"
struct Row4057{u8 values[4];};struct Obj4057{u8 pad[0xac];Row4057 rows[18];u8 flags;};
void dirty(Obj4057*p,bool c){p->flags|=c<<2;}
void func_004057DC(Obj4057*p,u32 index,u8 value){u8&v=p->rows[index>>3].values[index&3];dirty(p,v!=value);v=value;}
