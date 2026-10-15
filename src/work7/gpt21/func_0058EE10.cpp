#include "range.h"
// D primary vtable ro_006F3738, secondary @+38; Primary D1 is 4B9AA0.
struct Primary {
    virtual ~Primary();
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
    virtual void v15(); virtual void v16();
    char pad[0x34];
};
struct Secondary { virtual ~Secondary(){} };
struct D: Primary,Secondary {
    char pad3C[0x98-0x3c];
    Primary member98;
    void finish(){}
    virtual ~D();
};
D::~D(){finish();}
