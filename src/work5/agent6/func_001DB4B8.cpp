#include "../../work4/agent3/dtor_1E7.h"
class Act1DB : public ActorBase {           // vtable ro_6D19A8 (23 slots, 2nd at +0x64)
public:
    virtual ~Act1DB();
    virtual void c21(); virtual void c22();
    char pad410[0x444 - 0x410];
    MemZ mZ;                                 // +0x444 (dtor 0x4EE540)
};
Act1DB::~Act1DB() {
}
