#include "range.h"
struct Obj173124{char pad[0x40c];u32 state;char pad410[0x430-0x410];Timer24 timer;};
extern bool func_00588BF0(Obj173124*,u32);
extern void func_006589D0(u32*,s32) ;
extern "C" void target(Obj173124*p){if(func_00588BF0(p,1)&&!p->timer.step())func_006589D0(&p->state,3);}
