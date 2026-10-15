#include "range.h"
struct S{char pad[0x10];PlayerSlots21*player;u32*flags;};__declspec(noinline) u32 func_0054CE64(S*p,s32 k){StateSlot21*s=p->player->slots;if(s[1].current==k)return 0x10;if(s[2].current==k)return 8;return 0;}
bool f_54CD30(S* p){u32 m=func_0054CE64(p,8);if(!m)return false;if(m&*p->flags)return true;return false;}
