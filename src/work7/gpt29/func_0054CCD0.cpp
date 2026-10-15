#include "range.h"
__declspec(noinline) u32 func_0054CE64(PlayerProxy29* p,s32 kind){StateSlot29* slots=p->player->slots;if(slots[1].current==kind)return 16;if(slots[2].current==kind)return 8;return 0;}
bool f_0054CCD0(PlayerProxy29* p,s32 kind){u32 mask=func_0054CE64(p,(s8)(kind+18));if(!mask)return false;if(mask&*p->flags)return true;return false;}
