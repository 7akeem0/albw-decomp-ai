#include "ladder_types.h"
struct Child520E {char pad0[0xd];u8 gate,flag;};
struct O520E {char pad0[0x38];Child520E* child;};
bool target(O520E*p){Child520E*c=p->child;if(c){if(c->gate||c->flag)return false;}return true;}
