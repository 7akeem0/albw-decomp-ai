#include "range.h"
struct S {char pad[0x10];PlayerSlots21*player;u32*flags;};
__declspec(noinline) u32 func_0054CE64(S*p,s32 kind){StateSlot21*s=p->player->slots;if(s[1].current==kind)return 0x10;if(s[2].current==kind)return 8;return 0;}
bool test(S*p,u32 mask){if(!mask)return false;if(*p->flags&mask)return true;return false;}
bool f_54CA0C(S*p){return test(p,func_0054CE64(p,1)|0x4000);}
