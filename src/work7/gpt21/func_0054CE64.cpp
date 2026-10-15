#include "range.h"
__declspec(noinline) u32 func_0054CE64(PlayerProxy21*p,s32 kind){
    StateSlot21*s=p->player->slots;
    if(s[1].current==kind)return 0x10;
    if(s[2].current==kind)return 8;
    return 0;
}
