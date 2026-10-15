#include "ds3.h"
struct VObjE { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); };
extern void* data_0070B898;
extern "C" void func_00503970(void*, s32);
class X29E57C {
public:
    virtual ~X29E57C();
    char pad[0x10];
    void* m14;
    char pad2[0x1c - 0x18];
    void* m1c;
    VObjE* m20;
};
X29E57C::~X29E57C() {
    if (m14) {
        if (m20) m20->v17();
        m14 = 0; m1c = 0; m20 = 0;
        func_00503970(data_0070B898, 6);
    }
}
