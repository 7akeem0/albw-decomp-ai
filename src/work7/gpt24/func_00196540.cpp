#include "range.h"
struct Obj196524{char pad[0x420];s8 mode;char pad421[0x444-0x421];u32 count;};
extern bool func_0014F794(Obj196524*);
extern "C" bool target(Obj196524*p){bool result=func_0014F794(p);if(!result){s32 mode=p->mode;if(mode==2){if(p->count==1)result=true;}else if(mode==3)result=true;}return result;}
