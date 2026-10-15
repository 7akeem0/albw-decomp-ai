#include "range18.h"
struct C{char pad[0x1c];u32 id;char gap[0x3c-0x20];Flag32 flags;};extern void func_004A3700(C*);struct Pair{C*child;u32 id;void act();};void Pair::act(){C*c=child;if(c&&c->id==id){c->flags.reset(0x44);c->flags.set(8);func_004A3700(c);}}struct O{char pad[0x34];Pair pair;};
void f(O*p){Pair& pr=p->pair;pr.act();}
