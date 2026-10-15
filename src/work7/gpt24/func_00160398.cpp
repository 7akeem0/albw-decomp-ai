#include "range.h"
struct Lookup160324{s8 flag;char pad1[7];f32 rate;void*found;};
extern Lookup160324 data_0070ACF8;
extern GameActors24*data_00706E20;
extern void func_00120E50(void*,void*);
extern void func_0052FD7C(u32*,void(*)(void*,void*),void*);
void clear(s8 n,Lookup160324*c){c->flag=n;}
extern "C" s32 target(f32 rate){Lookup160324*c=&data_0070ACF8;clear(0,c);c->rate=rate;GameActors24*const&g=data_00706E20;func_0052FD7C(g->actors,func_00120E50,0);return c->flag;}
