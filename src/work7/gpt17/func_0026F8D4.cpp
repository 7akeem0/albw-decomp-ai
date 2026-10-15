#include "range.h"
struct Obj {u8 pad[8];s8 mode;u8 pad9[0x50-9];s32 count,max;u32*items;u8 pad5c[0x72-0x5c];u8 flag;};
void f_0026F8D4(Obj*p,u32 value){if(p->mode==7||p->mode==8){if(p->count<p->max){p->items[p->count]=value;++p->count;}p->flag=1;}}
