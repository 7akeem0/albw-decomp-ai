#include "../../../../work7/gpt23/range.h"
extern "C" void func_0019A38C(void*);
struct Iter{char*obj;s32 offset;Iter(ListNode*n,s32 off):obj((char*)n-off),offset(off){};
    bool operator!=(const Iter&)const;Iter&operator++(){obj=(char*)((ListNode*)(obj+offset))->next-offset;return*this;}};
struct List{ListNode root;u32 count;s32 offset;Iter begin();Iter end();};
struct Owner{char pad0[0x24];List list;};
bool Iter::operator!=(const Iter&r)const{return obj!=r.obj;}
Iter List::begin(){return Iter(root.next,offset);}
Iter List::end(){return Iter(&root,offset);}
extern "C" void func_0014DD84(Owner*p){if(!p->list.count)return;Iter i=p->list.begin();Iter e=p->list.end();for(;i!=e;++i)func_0019A38C(i.obj);}
