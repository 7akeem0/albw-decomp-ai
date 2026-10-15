#include "range.h"
struct Child4A51 { char pad[0x44]; u8 flags; };
struct Inner4A51 { char pad[0x10]; Child4A51* child; };
struct Outer4A51 { Inner4A51* inner; };
struct Object4A51 { char pad[0x1c]; Outer4A51* holder; void update(); };
extern void func_00232478(Object4A51*);
void Object4A51::update() {
    func_00232478(this);
    Child4A51* p=holder->inner->child;
    if(p && (p->flags&1)) p->flags &= 0xfe;
}

