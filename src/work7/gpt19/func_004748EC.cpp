#include "range.h"
void Ctrl231::init(void* o,s16 i,s16 k){owner=o;index=i;kind=k;}
struct S {char pad[0x1c];void* owner;char gap[0xcc];Ctrl231 ctrl;};
extern void func_00231524(Ctrl231*);
void f_004748EC(S*p){p->ctrl.init(p->owner,7,0);func_00231524(&p->ctrl);}
