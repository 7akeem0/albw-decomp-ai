#include "range.h"
struct ActorFlagD76 { char pad0[0xd76]; u8 active; };
struct Manager52E4 { char pad0[0x14]; ActorFlagD76* player; };
struct Object52E4 { char pad0[0x10]; void* actor; };
extern Manager52E4* data_00711DE8;
__declspec(noinline) bool func_0052E418(void*) {
    ActorFlagD76* player=data_00711DE8->player;
    if(player) return player->active;
    return false;
}
bool f_0052E410(Object52E4* owner) { return func_0052E418(owner->actor); }
