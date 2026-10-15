#include "range.h"
void Ctrl231::init(void* o,s16 i,s16 k){owner=o;index=i;kind=k;}
struct S {char pad[0x1c];void* owner;char gap[0x78];Ctrl231 ctrl;};
void f_004836BC(S*p){p->ctrl.init(p->owner,2,0);}
