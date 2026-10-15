#include "range.h"
extern LookupResult15C24 data_0070ACF8;
extern GameActors24*data_00706E20;
extern void func_0011FF68(void*,void*);
extern void func_0052FD7C(u32*,void(*)(void*,void*),void*);
void clear(void*n,LookupResult15C24*c){c->found=n;}
extern "C" void* target(){LookupResult15C24*c=&data_0070ACF8;clear(0,c);GameActors24*const&g=data_00706E20;func_0052FD7C(g->actors,func_0011FF68,0);return c->found;}
