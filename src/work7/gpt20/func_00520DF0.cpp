#include "ladder_types.h"
struct O520D {char pad0[0x34];void* child;};
extern bool func_005742C4(void*);
bool f_00520DF0(O520D* p){return p->child?func_005742C4(p->child):true;}
