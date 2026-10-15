#include "range.h"
struct Node{Node*next;Node*prev;};
struct List{u32 count;Node root;};
struct Owner{u8 pad[0x14];List ready;List list;};
struct Item{u8 pad[0x44];Node node;};
extern "C" bool func_00418AE4(Item*);
extern "C" void func_00418B00(Item*);
extern "C" void func_00111EF0(List*,Node*);
extern "C" void func_00112364(List*,Node*,Node*);
struct Iter{Node*p;Iter(Node*n):p(n){}bool operator!=(const Iter&)const;Iter operator++(s32){Iter old=*this;p=p->next;return old;}};
bool Iter::operator!=(const Iter&o)const{return p!=o.p;}
void target(Owner*p){Iter n(p->list.root.next);if(!(n!=Iter(&p->list.root)))return;do{Iter cur=n++;if(!func_00418AE4((Item*)((u8*)cur.p-0x44))){func_00418B00((Item*)((u8*)cur.p-0x44));func_00111EF0(&p->list,cur.p);List*ready=&p->ready;Node*sentinel=&ready->root;func_00112364(ready,sentinel,cur.p);}}while(n!=Iter(&p->list.root));}
