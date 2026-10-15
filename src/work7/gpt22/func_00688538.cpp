#include "range.h"
void*operator new(u32,void*,s32)throw();
struct SafeString{const char*text;SafeString(const char*s):text(s){}virtual ~SafeString(){}};
struct Object{u8 storage[0x210];Object(FactoryArg22*,const SafeString&);};
Object*target(FactoryArg22*p){return new(p->list->heaps[p->list->index],4)Object(p,SafeString("CapFader_UraOmote"));}
