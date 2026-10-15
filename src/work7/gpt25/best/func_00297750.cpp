#include "../range_types.h"
struct Child297750;
extern "C" void func_0019A6C8(Child297750*);
struct Iter297750 {Child297750**p;Iter297750(Child297750**n):p(n){}bool operator!=(const Iter297750&)const;};
bool Iter297750::operator!=(const Iter297750&o)const{return p!=o.p;}
extern "C" void f_00297750(PtrArray25<Child297750>*p){Iter297750 it(p->items),end(p->items+p->count);if(!(it!=end))return;do{func_0019A6C8(*it.p);++it.p;}while(it!=end);}
