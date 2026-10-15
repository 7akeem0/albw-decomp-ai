#include "ds3.h"
struct X2DF6 {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(s32);
    virtual void v25();
    virtual s32 v26();
};
struct S2DF6 { char pad[0x14]; X2DF6* m14; };
void func_002DF63C(S2DF6* p) {
    if (p->m14->v26() == 0) p->m14->v24(0);
}
