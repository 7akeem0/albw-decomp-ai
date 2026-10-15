#include "range.h"
struct Flags51E4 { char pad[0xd]; u8 first,second; };
struct Holder51E4 { Flags51E4* child; };
struct Object51E4 { char pad[0x1844]; Holder51E4 holder; bool test(); };
bool Object51E4::test() {
    Flags51E4* p=holder.child;
    if(p) { bool inactive=p->first==0&&p->second==0;return !inactive; }
    return false;
}
