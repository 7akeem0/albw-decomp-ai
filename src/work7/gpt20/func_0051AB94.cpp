#include "ladder_types.h"
struct Small51AB{u16 a,b,c;};
struct O51AB{char pad0[0x136];Small51AB first[20],second[20];};
Small51AB* f_0051AB94(O51AB* p,bool first,s32 i){return first?&p->first[i]:&p->second[i];}
