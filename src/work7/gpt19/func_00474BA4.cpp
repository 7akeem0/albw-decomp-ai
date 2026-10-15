#include "range.h"
void Ctrl231::init(void* o,s16 i,s16 k){owner=o;index=i;kind=k;}
struct S {char pad[0x1c];void* owner;char gap[0xcc];Ctrl231 ctrl;};
extern void func_002313DC(Ctrl231*);
void f_00474BA4(S*p){p->ctrl.init(p->owner,9,0);func_002313DC(&p->ctrl);}
