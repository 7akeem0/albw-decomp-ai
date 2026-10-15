#include "range.h"
struct Object2272 {char pad[0x74a];u8 flag;};
struct ActorRef2272 {u32 id;};
extern bool func_00521080(Object2272*,const ActorRef2272*);
extern s32 func_00520FD4(Object2272*);
void target(Object2272*p,const ActorRef2272*r){if(func_00521080(p,r)){if(!func_00520FD4(p))p->flag=1;}}
