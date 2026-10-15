#include "range.h"
struct Ctrl {s16 kind,index;u32 frame;void* owner;void init(void*,s16,s16);};
void Ctrl::init(void* o,s16 k,s16 i){owner=o;index=i;kind=k;}
struct S {char pad[0x1c];void* owner;char gap[192];Ctrl ctrl;};
extern void func_002313DC(Ctrl*);
void f_0045E328(S* p){p->ctrl.init(p->owner,0,0);func_002313DC(&p->ctrl);}
