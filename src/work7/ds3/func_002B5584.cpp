#include "actor.h"
// D1 dtor: vt ro_6DB510 (2nd base vptr @0x320=vt+0x84), base Base6EDB00 vt ro_6EDB00
// (2nd base vptr @0x320=vt+0x84); member @0x910 dtor func_0036D0E0; tail base dtor 0x1510A4.
class X2B5584 : public Base6EDB00 {
public:
    virtual ~X2B5584();
    char pad[0x910 - 0x410];
    Mem36D0E0 m910;
};
X2B5584::~X2B5584() {}
