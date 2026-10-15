#include "range.h"
struct Link { char pad[0x58]; void* value; };
struct Actor { char pad[0x48]; Link* link; };
void* f_0053F408(Actor* a){ Link* q=a->link; return q ? q->value : 0; }
