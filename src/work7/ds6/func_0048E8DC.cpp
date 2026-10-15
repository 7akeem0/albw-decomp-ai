#include "ds6.h"

struct Base48E {
    virtual ~Base48E();
    Base48E(u32 a, const char* name);
    char pad[0x1d4];
};

struct Obj48E8DC : Base48E {
    Obj48E8DC(u32 a);
    virtual ~Obj48E8DC();
    u32 m1d8, m1dc, m1e0;
};

Obj48E8DC::Obj48E8DC(u32 a) : Base48E(a, "NullFaderTask") {
    m1d8 = 0;
    m1dc = 0;
    m1e0 = 0;
}
