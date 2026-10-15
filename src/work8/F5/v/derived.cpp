#include "../ds4.h"
#include "../../../work4/agent3/dtor_1E7.h"
extern "C" void func_0036D0E0(void*);
struct MemP { u32 w; ~MemP(){ func_0036D0E0(this); } };
class ActD : public ActC {
public:
    virtual ~ActD();
    virtual void d36(); virtual void d37(); virtual void d38(); virtual void d39();
    virtual void d40(); virtual void d41(); virtual void d42(); virtual void d43();
    u8 pad2[0x864 - 0x7b0];
    MemP mA;
    MemP mB;
};
ActD::~ActD() {}
class ActE : public ActD {
public:
    virtual ~ActE();
    u8 pad3[0x40];
};
ActE::~ActE() {}
