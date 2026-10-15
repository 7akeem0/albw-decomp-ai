#include "../range_types.h"
struct Child2976 {char pad[0x4a];u8 flag;};
struct Iter {Child2976**p;Iter(Child2976**n):p(n){}bool operator!=(const Iter&)const;Iter operator++(s32){Iter old=*this;++p;return old;}};
bool Iter::operator!=(const Iter&o)const{return p!=o.p;}
extern "C" void f_00297648(PtrArray25<Child2976>*p){Iter it(p->items);Iter end(p->items+p->count);if(!(it!=end))return;do{Child2976*q=*it.p; ++it.p; q->flag=0;}while(it!=end);}
