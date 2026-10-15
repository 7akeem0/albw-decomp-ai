#include "range.h"
struct Child{u8 pad[0x4b];u8 flag;};
struct Iter{Child**p;Iter(Child**q):p(q){}bool operator!=(const Iter&b)const;Child*next(){return*p++;}};bool Iter::operator!=(const Iter&b)const{return p!=b.p;}
void f_00297724(PtrArray<Child>*p){Iter cur(p->data);Iter end(p->data+p->num);if(cur!=end)do{cur.next()->flag=1;}while(cur!=end);}
