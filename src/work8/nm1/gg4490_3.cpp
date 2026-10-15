#include "../../work7/gpt27/range.h"
struct Owner449{u8 pad[0x1ac];s32 count,max;void**items;void**begin();void**end();};
inline void**Owner449::begin(){return items;}
inline void**Owner449::end(){return items+count;}
extern "C" void func_00455620(void*,bool);
void func_004490C4(Owner449*p,bool enabled){void**it=p->items;s32 n=p->count;void**end=it+n;for(;it!=end;++it)func_00455620(*it,!enabled);}
