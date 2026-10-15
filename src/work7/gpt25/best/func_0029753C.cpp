#include "../range_types.h"
struct Item{char pad[0x49];u8 a,b,c;};
struct Iter{Item**p;Iter(Item**x):p(x){}bool operator!=(const Iter&)const;Item*get(){return *p;}Iter&operator++(){++p;return *this;}};
bool Iter::operator!=(const Iter&o)const{return p!=o.p;}
void target(PtrArray25<Item>*a){Iter it(a->items),end(a->items+a->count);if(!(it!=end))return;do{Item**cur=it.p;Item*q=*cur++;it.p=cur;q->a=1;q->b=1;q->c=0;}while(it!=end);}
