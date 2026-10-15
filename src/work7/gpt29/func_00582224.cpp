#include "range.h"
struct Sub5822{s8 kind;char pad1[3];};struct Out5822{s32 count,capacity;void**items;};struct Global5822{char pad0[0x18];Sub5822 sub;char pad1c[0x45];u8 active;};struct Owner5822{char pad0[0x40];void*child;};
extern Global5822*data_00709DF8;extern s32 func_0052A438(void*,Out5822*,const Sub5822*);
s32 f_00582224(Owner5822*p,Out5822*out){Global5822*g=data_00709DF8;if(g->active)return 0;return func_0052A438(p->child,out,&g->sub);}
