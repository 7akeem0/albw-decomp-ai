#include "range.h"
extern LookupResult15C24 data_0070C080;
extern GameActors24*data_00706E20;
extern void func_0011F9F0(void*,void*);
extern void func_0052FD7C(u32*,void(*)(void*,void*),void*);
void clear(s8 n,LookupResult15C24*c){c->flag=n;}
extern "C" s32 target(){LookupResult15C24*c=&data_0070C080;clear(0,c);GameActors24*const&g=data_00706E20;func_0052FD7C(g->actors,func_0011F9F0,0);return c->flag;}
