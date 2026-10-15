// 0x1E57E8 (and twin 0x1E5F9C, same vtable ro_006E0B24): D1 destructor of an ActorBase-derived class
// with a member at +0x410 whose dtor is 0x4EE540 (out-of-line). Base dtor 0x1510A4 is tail-called.
#include "actorbase.h"

struct Member410 {
    ~Member410();   // 0x4EE540
};

class Actor1E57E8 : public ActorBase {
public:
    virtual ~Actor1E57E8();
    char pad324[0x410 - 0x324];
    Member410 m410;
};

Actor1E57E8::~Actor1E57E8() {}
