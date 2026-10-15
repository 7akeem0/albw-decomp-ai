#include "range.h"
struct StateFD { char pad0[0x23]; s8 flag; };
struct ActorFD {
    char pad0[0x2d0];
    StateFD* state;
    char pad2d4[0x34c-0x2d4];
    void* value;
};
extern "C" void func_001501C8(ActorFD*,void*);
extern "C" void func_0014FD48(ActorFD* p) {
    if (p->state && p->state->flag == 1)
        func_001501C8(p,p->value);
}
