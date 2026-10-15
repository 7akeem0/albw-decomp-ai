#include "range.h"
struct S {char pad[0x10];PlayerSlots21*player;u32*flags;};
__declspec(noinline) u32 func_0054CE64(S*p,s32 kind){
    StateSlot21*s=p->player->slots;
    if(s[1].current==kind)return 0x10;
    if(s[2].current==kind)return 8;
    return 0;
}
bool f_54CA88(S*p){u32 mask=func_0054CE64(p,4);if(!mask)return false;if(mask&*p->flags)return true;return false;}
