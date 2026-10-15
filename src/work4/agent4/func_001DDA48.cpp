#include "cls4.h"

struct Target720 : public HandleObj {
    TYPEINFO_ROOT(Target720)
};

struct Msg {
    char pad[0x14];
    u32 m14;
    char pad18[0x28 - 0x18];
    u32 m28;
};

class Cls {
public:
    bool func_001DDA48(const Msg& msg);
    char pad[0x720];
    u32 m720;
};

bool Cls::func_001DDA48(const Msg& msg) {
    HandleObj* o = func_0052FBA0(&data_00706E20->handles, msg.m28);
    if (IsDerivedFrom<Target720>(o)) {
        m720 = msg.m14;
        return true;
    }
    return false;
}
