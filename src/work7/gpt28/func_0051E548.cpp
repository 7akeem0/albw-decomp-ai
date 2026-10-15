#include "range.h"
struct Flags51E548 { char pad[0xd]; u8 first,second; };
struct Holder51E548 { Flags51E548* child; };
struct Object51E548 { char pad[0x1848]; Holder51E548 holder; bool test(); };
bool Object51E548::test() {
    Flags51E548* p=holder.child;
    if(p) return p->first==0&&p->second==0;
    return true;
}
