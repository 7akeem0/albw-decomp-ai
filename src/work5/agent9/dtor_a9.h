// agent9: dtor family for the 0x202000-0x204000 enemies. Base vt ro_6EDB00 (31 primary slots, 2nd base at +0x320 -> vt+0x84)
#include "../../work4/agent3/dtor_1E7.h"
class Base6EDB00 : public ActorBase {
public:
    void finalize() {}
    virtual ~Base6EDB00() { finalize(); }
    virtual void c21(); virtual void c22(); virtual void c23(); virtual void c24(); virtual void c25();
    virtual void c26(); virtual void c27(); virtual void c28(); virtual void c29(); virtual void c30();
};
