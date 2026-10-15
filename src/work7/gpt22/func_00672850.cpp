#include "range.h"
struct S{u8 pad[0x2d7];u8 done;u8 pad2d8[0x909-0x2d8];u8 flag909;u8 pad90a[0x984-0x90a];s32 id984;u8 pad988[6];u8 flag98e;};
extern "C" void func_002F8DE4(S*,s32,s32,s32);extern "C" void func_004FAD10(S*);
void target(S*p){if(p->id984<0){p->done=1;return;}func_002F8DE4(p,p->id984,-1,0);func_004FAD10(p);p->flag909=0;p->flag98e=1;}
