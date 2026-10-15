#include "range.h"
struct Object1C8F;
struct ActorRef1C8F {u32 id;};
struct Message1C8F {char pad[0x28];ActorRef1C8F actor;};
extern bool func_00521080(Object1C8F*,const ActorRef1C8F*);
extern s32 func_00520FD4(Object1C8F*);
bool target(Object1C8F*p,const Message1C8F*m){if(func_00521080(p,&m->actor)){if(func_00520FD4(p))return false;return true;}return false;}
