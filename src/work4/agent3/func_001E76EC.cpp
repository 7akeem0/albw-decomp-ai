#include "dtor_1E7.h"
class ActD1 : public ActC {                  // vtable ro_6D2270
public:
    virtual ~ActD1();
    char pad7b0[0x7e0 - 0x7b0];
    MemY mY2;                                // +0x7e0
    MemX mX2;                                // +0xac4
};
ActD1::~ActD1() {
}
