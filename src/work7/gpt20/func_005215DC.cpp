#include "ladder_types.h"
struct Child5215 {char pad0[0x78];s32 state;};
struct O5215 {char pad0[0xdf4];Child5215* child;};
bool target(O5215*p){Child5215*c=p->child;return !c||c->state==3||c->state==4||c->state==0;}
