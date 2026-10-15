#include "ds6.h"

namespace sead { struct IDisposer { virtual ~IDisposer(); }; }

extern void* data_0070B728;
void func_004CD668(void* a, void* b);

struct Obj5027C4 : sead::IDisposer {
    virtual ~Obj5027C4();
};

Obj5027C4::~Obj5027C4() {
    if (data_0070B728) func_004CD668(data_0070B728, this);
}
