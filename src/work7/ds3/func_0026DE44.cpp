#include "ds3.h"
struct Actor { char pad[0x50]; void* m50; };
struct S26DE44 { char pad[8]; u32 m8; };
extern "C" s32 func_00588BE4(Actor*);
extern "C" s32 data_00693220;
int func_0026DE44(S26DE44* self, Actor* actor) {
    if (func_00588BE4(actor) != data_00693220 || actor->m50 == 0) return 0;
    self->m8++;
    return 1;
}
