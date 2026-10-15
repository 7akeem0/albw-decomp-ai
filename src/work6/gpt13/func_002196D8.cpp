#include "en218.h"
struct Handle{u32 v;Handle(u32 a):v(a){} void clear(){*this=Handle(0);} void set(u32 n){*this=Handle(n);} };struct Owner{char p[0x10];Handle h;};struct Game{char p[0x3dbe8];Owner* owner;};extern Game* data_00706E20;
struct Player{void func_0028FCC8();};extern Player* data_0070FB60;
void func_002196D8(EnB*o,bool on){if(data_0070FB60)data_0070FB60->func_0028FCC8();if(on){Handle* h=&data_00706E20->owner->h;if(h->v&&h->v==o->m2cc)h->clear();}}
