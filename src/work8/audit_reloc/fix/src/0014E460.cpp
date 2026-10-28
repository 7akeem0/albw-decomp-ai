#include "range.h"
extern "C" void func_00199EC8(void*);
inline bool OffsetListCursor::operator!=(const OffsetListCursor&r)const{return object!=r.object;}
inline OffsetListCursor OffsetListView::begin(){return OffsetListCursor(root.next,offset);}
OffsetListCursor OffsetListView::end(){return OffsetListCursor(&root,offset);}
extern "C" void func_0014DD84(Owner14DD* p){
    if(!p->list.count)return;
    OffsetListCursor current=p->list.begin();
    OffsetListCursor end=p->list.end();
    for(;current!=end;++current)func_00199EC8(current.object);
}
